# The minimum CMake version required to build the project
cmake_minimum_required(VERSION 3.5)
cmake_policy(VERSION 3.5)

# Define the project
project("degu-lang"
	VERSION 0.0.1
	LANGUAGES "CXX"
)

# Custom global project variables
option(PROJECT_DEBUG_ENABLED ON)

# List the sub-projects of the project needed to be built
set(SUB_DIRS
	"degu-common"
	#"degu-parser"
	#"degu-optimizer"
	#"degu-translator"
	"degu-compiler"
)

if (CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "_d")
else(CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "")
endif(CMAKE_BUILD_TYPE STREQUAL Debug)

# Iterate over the sub-projects
foreach (DIR IN ITEMS ${SUB_DIRS})
	message("Adding subdirectory '${DIR}'")
	add_subdirectory(${DIR})
endforeach ()
