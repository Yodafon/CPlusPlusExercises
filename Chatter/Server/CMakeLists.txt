# CMakeList.txt : CMake project for NeuralNetwork_XOR, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

if(MSVC)
  # Force to always compile with W4
  if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
    string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    set(CMAKE_CXX_FLAGS "-Od ${CMAKE_CXX_FLAGS}")
  else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
  endif()
elseif(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
  # Update if necessary
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")
endif()

project ("Chatter_Server") 

file(GLOB Chatter_SRC "Server/header/*.h"
	                  "Server/src/*.cpp"
                      )
# Add source to this project's executable.
add_executable(Chatter_Server ${Chatter_SRC}   "src/Chatter.cpp"   "header/Chatter.h")
target_include_directories(Chatter_Server PUBLIC "${PROJECT_BINARY_DIR}/Server")

include_directories("C:/Users/Laci/Documents/Projects/Boost")
include_directories("C:/Users/Laci/Documents/Projects/GoogleTest/googletest/include")
target_link_directories(Chatter_Server PUBLIC "C:/Users/Laci/Documents/Projects/Boost/stage/lib")
target_link_directories(Chatter_Server PUBLIC "C:/Users/Laci/Documents/Projects/Boost/stage/lib")

# speficy C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# TODO: Add tests and install targets if needed.
