cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 3.5)

project("degu"
	VERSION 0.0.1
	LANGUAGES "CXX"
)

# Define the include directories for the sub-project
set(INCLUDE_DIRS
	"include"
	".."
	"${CMAKE_CURRENT_BINARY_DIR}/.."
)

# Define the sources for the sub-project
set(SOURCE_FILES
	"src/main.cpp"
	"src/instance.cpp"
)

# Compiler arguments
add_definitions("-std=c++11" "-Wall" "-Wextra" "-Wpedantic" "-g3" "-O3")

# Include the necessary directories
include_directories(${INCLUDE_DIRS})

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link it to the needed libraries
#find_library(DEGU_COMMON "${CMAKE_CURRENT_BUILD_DIR}/degu-common")
#include("${PREFIX}/lib/degu-lang/degu-common-targets.cmake")
#include("${CMAKE_CURRENT_BINARY_DIR}/../degu-common/degu-common-exports.cmake")
target_link_libraries("${PROJECT_NAME}" "degu-common")
target_link_libraries("${PROJECT_NAME}" "degu-parser")
target_link_libraries("${PROJECT_NAME}" "degu-lexer")
target_link_libraries("${PROJECT_NAME}" "degu-optimiser")
target_link_libraries("${PROJECT_NAME}" "degu-translator")
set_target_properties("${PROJECT_NAME}" PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set_target_properties("${PROJECT_NAME}" PROPERTIES OUTPUT_NAME "${PROJECT_NAME}${BUILD_POSTFIX}")
