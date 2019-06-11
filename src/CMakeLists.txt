#[[
	:: project subdirectories ::
		:: our code will be structured such that every component of the project is bundled as a library and linked to the executable

		:: for now, the core library will contain all important programming. however, if you want to add more libraries / components, simply create a new folder with the same structure as the core folder. then, add the subdirectory below here
]]
add_subdirectory(core)


#[[
	:: executable ::
		:: my-executable - the name of the generated executable

		:: the executable is created solely upon the main.cpp file in this project; however, if you've more than one file that the executable needs to build from, simply add them separated by spaces after main.cpp
]]
add_executable(my-executable main.cpp)


#[[
	:: target_link_libraries ::
		:: my-executable - the name of the executable we link against

		:: core          - one of the libraries we link to the executable
		:: more libraries may be added simply by appending them, space separated, after core
]]
target_link_libraries(my-executable core)