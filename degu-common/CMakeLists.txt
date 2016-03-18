cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 3.5)

project("degu-common"
	VERSION 0.0.1
	LANGUAGES "CXX"
)

# Define the include directories for the sub-project
set(INCLUDE_DIRS
	"${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# Define the sources for the sub-project
set(SOURCE_FILES
	"src/symbol.cpp"
)
message("FOUND THIS!")
# Compiler arguments
add_definitions("-std=c++11" "-Wall" "-Wextra" "-Wpedantic" "-g3" "-O3")

# Include the necessary directories
include_directories(${INCLUDE_DIRS})

# Create the library
add_library(${PROJECT_NAME} ${SOURCE_FILES})