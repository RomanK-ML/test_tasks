# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Linear_congruential_generator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Linear_congruential_generator_autogen.dir\\ParseCache.txt"
  "Linear_congruential_generator_autogen"
  )
endif()
