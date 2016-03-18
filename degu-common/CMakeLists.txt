cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 3.5)

project("degu-common"
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

# Define the include directories for the sub-project
set(INCLUDE_FILES
	"include/types.h"
	"include/symbol.h"
	"include/argument.h"
)

# Define the sources for the sub-project
set(SOURCE_FILES
	"src/symbol.cpp"
	"src/argument.cpp"
)

# Set up the global config file
configure_file("include/config.h.in" "${CMAKE_CURRENT_BINARY_DIR}/include/config.h")

add_definitions("-std=c++11" "-Wall" "-Wextra" "-Wpedantic" "-g3" "-O3")

# Include the necessary directories
include_directories(${INCLUDE_DIRS})

# Create the library
add_library("${PROJECT_NAME}" STATIC ${SOURCE_FILES})

set_target_properties("${PROJECT_NAME}" PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set_target_properties("${PROJECT_NAME}" PROPERTIES OUTPUT_NAME "${PROJECT_NAME}${BUILD_POSTFIX}")

# Install the library
#install(TARGETS "${PROJECT_NAME}" DESTINATION "lib/degu-lang/degu-common" EXPORT "${PROJECT_NAME}-targets")
#install(FILES ${INCLUDE_FILES} DESTINATION "include/degu-lang/degu-common")
#install(EXPORT "${PROJECT_NAME}-targets" DESTINATION "lib/degu-lang")
