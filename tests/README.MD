## tests directory
this folder contains all of the unit tests for the project. [googletest](https://github.com/google/googletest) is our in this template, so i'll refer you to its documentation primer right [here](https://github.com/google/googletest/blob/master/googletest/docs/primer.md). when you create a new file here, you'll need to append it to the line at the very top of the `CMakeLists.txt` in this folder:

```
set(TEST_SRCS
	test_some_class.cpp

	# add your new file right here!
	my_new_test.cpp
)
```
