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
	"${CMAKE_CURRENT_SOURCE_DIR}/degu-common"
	#"${CMAKE_CURRENT_SOURCE_DIR}/degu-parser"
	#"${CMAKE_CURRENT_SOURCE_DIR}/degu-optimizer"
	#"${CMAKE_CURRENT_SOURCE_DIR}/degu-translator"
	"${CMAKE_CURRENT_SOURCE_DIR}/degu-compiler"
)

# Iterate over the sub-projects
foreach (DIR IN ITEMS ${SUB_DIRS})
	message("Adding subdirectory '${DIR}'")
	add_subdirectory(${DIR})
endforeach ()
