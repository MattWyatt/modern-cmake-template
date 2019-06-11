#[[
	:: cmake_minimum_required :: 
		:: set the minimum required version of CMake to build the project
]]
cmake_minimum_required(VERSION 3.9)


#[[
	:: project ::
		:: my-project is the name of the CMake project

		:: C and CXX (separated by spaces) set the languages used within the project
]]
project(my-project C CXX)


#[[
	:: project variables ::
		:: 17 is the C++ standard that we pass to the compiler.
		we're going to use C++17 cos we're modern!

		:: the runtime output directory is where the executables will be placed
		when we compile the project.
]]
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


#[[
	:: include_directories ::
		:: this statement specifies that we need to look for header files in this directory
		:: for this project, we don't separate source files and header files
]]
include_directories(${CMAKE_SOURCE_DIR}/src)


#[[
	:: subdirectories ::
		:: subdirectories of the project may be added here

		:: src   		- location of the project code itself
		:: tests 		- location of the project tests

		:: googletest   - third party library for testing 
]]


add_subdirectory(src)
add_subdirectory(tests)


add_subdirectory(googletest)