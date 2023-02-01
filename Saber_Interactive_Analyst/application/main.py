# Import required libraries
import datetime
import streamlit as st
import pandas as pd
import matplotlib.pyplot as plt
import requests
import json


# API endpoint to get the list of assets
url = "https://api.coincap.io/v2/assets"

# Make a GET request to the API
response = requests.get(url)

# Load the response data as a JSON object
data_assets = json.loads(response.text)

# Convert the assets data to a Pandas dataframe with columns "id", "symbol", and "name"
assets_list = pd.DataFrame(data_assets["data"], columns=["id", "symbol", "name"])

# Create a selectbox in the Streamlit sidebar to select an asset
select_asset = st.sidebar.selectbox("Select an asset", assets_list["symbol"], index=0)

# Create date input fields in the Streamlit sidebar to select date range
date_columns = st.sidebar.columns(2)
date_from = date_columns[0].date_input("Date from", pd.to_datetime("10.12.2022", format="%d.%m.%Y"))
date_to = date_columns[1].date_input("Date to")

# Get the asset ID based on the selected asset symbol
asset_id = assets_list[assets_list["symbol"] == select_asset]["id"].iloc[0]

# Convert the start and end dates to timestamps (in milliseconds)
start = int(datetime.datetime.combine(date_from, datetime.datetime.min.time()).timestamp()*1000)
end = int(datetime.datetime.combine(date_to, datetime.datetime.min.time()).timestamp()*1000)

# API endpoint to get the asset's price history
url = f"https://api.coincap.io/v2/assets/{asset_id}/history?interval=d1&start={start}&end={end}"

# Make a GET request to the API
response = requests.get(url)

# Load the response data as a JSON object
data = json.loads(response.text)

# Convert the price history data to a Pandas dataframe with columns "date" and "priceUsd"
data = pd.DataFrame(data["data"], columns=["date", "priceUsd"])

# Convert the "date" column to date format and remove the time component
data["date"] = pd.to_datetime(data["date"]).dt.date

# Convert the "priceUsd" column to numeric format
data["priceUsd"] = pd.to_numeric(data["priceUsd"])

# Create a bar chart of the asset's price history
plt.figure(figsize=(14, 8))
plt.bar(data["date"], data["priceUsd"])
plt.xlabel('TIME')
plt.ylabel('PRICE')

# Show the bar chart in Streamlit
st.pyplot(plt)
