# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Projekt1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Projekt1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Projekt1.dir/flags.make

CMakeFiles/Projekt1.dir/main.c.obj: CMakeFiles/Projekt1.dir/flags.make
CMakeFiles/Projekt1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Projekt1.dir/main.c.obj"
	E:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Projekt1.dir\main.c.obj   -c "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\main.c"

CMakeFiles/Projekt1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Projekt1.dir/main.c.i"
	E:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\main.c" > CMakeFiles\Projekt1.dir\main.c.i

CMakeFiles/Projekt1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Projekt1.dir/main.c.s"
	E:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\main.c" -o CMakeFiles\Projekt1.dir\main.c.s

# Object files for target Projekt1
Projekt1_OBJECTS = \
"CMakeFiles/Projekt1.dir/main.c.obj"

# External object files for target Projekt1
Projekt1_EXTERNAL_OBJECTS =

Projekt1.exe: CMakeFiles/Projekt1.dir/main.c.obj
Projekt1.exe: CMakeFiles/Projekt1.dir/build.make
Projekt1.exe: CMakeFiles/Projekt1.dir/linklibs.rsp
Projekt1.exe: CMakeFiles/Projekt1.dir/objects1.rsp
Projekt1.exe: CMakeFiles/Projekt1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Projekt1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Projekt1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Projekt1.dir/build: Projekt1.exe

.PHONY : CMakeFiles/Projekt1.dir/build

CMakeFiles/Projekt1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Projekt1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Projekt1.dir/clean

CMakeFiles/Projekt1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1" "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1" "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\cmake-build-debug" "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\cmake-build-debug" "E:\Fejlett programozasi nyelvek\Algoritmusok es adatszerkezetek\Projekt1\cmake-build-debug\CMakeFiles\Projekt1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Projekt1.dir/depend

