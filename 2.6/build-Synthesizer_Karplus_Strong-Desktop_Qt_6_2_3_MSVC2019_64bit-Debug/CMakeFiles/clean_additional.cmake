# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Synthesizer_Karplus_Strong_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Synthesizer_Karplus_Strong_autogen.dir\\ParseCache.txt"
  "Synthesizer_Karplus_Strong_autogen"
  )
endif()
