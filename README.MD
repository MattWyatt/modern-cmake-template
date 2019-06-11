# a modern template for C++ projects
with the addition of github templates as a feature to the site, i figured i'd try my hand at creating a template for modern c++ projects using cmake. i hope this template will alleviate some of the setup that goes into writing c\+\+.

i'm still learning (programming is complex.. who knew?). as i gather new and better ways to handle projects, i'll make sure i update this repo!

# guide
in each directory, you will find a readme file that details the purpose of the folder and how it should be configured. you will also find a well-documented `CMakeLists.txt` file that attempts to explain exactly what's going on inside the directory.

## root directory
this is the root directory, and it contains the following:
- third party projects / libraries (e.g `googletest`)
- the `src` folder
- the `tests` folder
- any extra configuration / data files (e.g a `Dockerfile` or a `.gitignore`)


## building (mac and linux)
if you're new to cmake, the build process is pretty simple. the following commands will build this project on linux or osx with cmake installed:

```
mkdir build_debug && cd build_debug
cmake .. -DCMAKE_BUILD_TYPE=Debug
make
```

and voila! project is built and ready to run. the program itself as well as the testing executable are contained inside the `bin` directory.
