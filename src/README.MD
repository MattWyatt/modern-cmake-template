## src directory
the `src` directory contains all of the project's source code. that means source files **and** header files. they're all right here. all actual logic should be bundled into libraries based on their functionality. for example, you may want to have a library called `core` and perhaps another library called `ui`. for now, the only library we've got here is called `core`.

if you happen to want to add another library to your project, create a folder and a `CMakeLists.txt` for it. you may model your `CMakeLists.txt` file after the one inside `core`. once you've done that, be sure you edit the `CMakeLists.txt` inside **this** folder and add your new library as a subdirectory like so:

```
add_subdirectory(core)

# put your new library right here!
add_subdirectory(my_folder)
```

also, there is a `main.cpp` file here. this is the file that we generate the executable directly from, and then link our libraries here into it. the `main.cpp` file should have the sole job of using the libraries to run the program.