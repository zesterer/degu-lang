cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 3.5)

project("degu-optimiser"
	VERSION 0.0.1
	LANGUAGES "CXX"
)

# Custom global project variables
option(PROJECT_DEBUG_ENABLED TRUE)
set(CMAKE_BUILD_TYPE RELEASE)

# Define the include directories for the sub-project
set(INCLUDE_DIRS
	"include"
)

# Define the sources for the sub-project
set(SOURCE_FILES
)

# Compiler arguments
add_definitions("-std=c++11" "-Wall" "-Wextra" "-Wpedantic" "-g3" "-O3")

# Include the necessary directories
include_directories(${INCLUDE_DIRS})

# Create the library
add_library("${PROJECT_NAME}" STATIC ${SOURCE_FILES})

# Link it to the needed libraries
target_link_libraries("${PROJECT_NAME}" "degu-common")
set_target_properties("${PROJECT_NAME}" PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set_target_properties("${PROJECT_NAME}" PROPERTIES OUTPUT_NAME "${PROJECT_NAME}${BUILD_POSTFIX}")
