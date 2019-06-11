#[[
	:: TEST_SRCS
		:: this is a list of all the source files where tests are contained
		:: to add more tests, simply append the source files to the list below
]]
set(TEST_SRCS
	test_some_class.cpp
)


#[[
	:: enable_testing ::
		:: this command tells CMake that this directory and everything in it is for testing
]]
enable_testing()


#[[
	:: include all the required directories
]]
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${gtest_SOURCE_DIR}/include)


add_executable(tests test_main.cpp ${TEST_SRCS})
add_test(tests tests)


#[[
	:: target_link_libraries
		:: testing is contained within an executable, so we need to link all our libraries to
		the testing executable as well

		:: additionally, the gtest library is linked as our testing framework
]]
target_link_libraries(tests
	gtest

	core
)