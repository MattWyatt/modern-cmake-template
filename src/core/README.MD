## core directory
this is, as described in the directory above, a library that is part of the project. if you view the `CMakeLists.txt` in this folder, you'll notice that it creates a library from all the files here:

```
add_library(core 
	some_class.h 
	some_class.cpp
)
```

that's quite literally it. when a new set of files is added to the project, simply append them to the list like so:

```
add_library(core 
	some_class.h 
	some_class.cpp

	# your new files added here
	my_new_file.h
	my_new_file.cpp
)
```

if you wish to add another library, it will use the **exact** same structure as this one, albeit with a different name and folder name. be sure that you edit the `CMakeLists.txt` above this one and include the new subdirectory!