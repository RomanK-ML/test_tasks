# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Interaural_time_difference_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Interaural_time_difference_autogen.dir\\ParseCache.txt"
  "Interaural_time_difference_autogen"
  )
endif()
