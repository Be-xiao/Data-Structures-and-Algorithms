# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build

# Include any dependencies generated for this target.
include src/CMakeFiles/lesson02.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/lesson02.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/lesson02.dir/flags.make

src/CMakeFiles/lesson02.dir/Seqlist.c.o: src/CMakeFiles/lesson02.dir/flags.make
src/CMakeFiles/lesson02.dir/Seqlist.c.o: ../src/Seqlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/lesson02.dir/Seqlist.c.o"
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lesson02.dir/Seqlist.c.o   -c /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/src/Seqlist.c

src/CMakeFiles/lesson02.dir/Seqlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lesson02.dir/Seqlist.c.i"
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/src/Seqlist.c > CMakeFiles/lesson02.dir/Seqlist.c.i

src/CMakeFiles/lesson02.dir/Seqlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lesson02.dir/Seqlist.c.s"
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/src/Seqlist.c -o CMakeFiles/lesson02.dir/Seqlist.c.s

src/CMakeFiles/lesson02.dir/test.c.o: src/CMakeFiles/lesson02.dir/flags.make
src/CMakeFiles/lesson02.dir/test.c.o: ../src/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/CMakeFiles/lesson02.dir/test.c.o"
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lesson02.dir/test.c.o   -c /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/src/test.c

src/CMakeFiles/lesson02.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lesson02.dir/test.c.i"
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/src/test.c > CMakeFiles/lesson02.dir/test.c.i

src/CMakeFiles/lesson02.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lesson02.dir/test.c.s"
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/src/test.c -o CMakeFiles/lesson02.dir/test.c.s

# Object files for target lesson02
lesson02_OBJECTS = \
"CMakeFiles/lesson02.dir/Seqlist.c.o" \
"CMakeFiles/lesson02.dir/test.c.o"

# External object files for target lesson02
lesson02_EXTERNAL_OBJECTS =

src/lesson02: src/CMakeFiles/lesson02.dir/Seqlist.c.o
src/lesson02: src/CMakeFiles/lesson02.dir/test.c.o
src/lesson02: src/CMakeFiles/lesson02.dir/build.make
src/lesson02: src/CMakeFiles/lesson02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable lesson02"
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lesson02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/lesson02.dir/build: src/lesson02

.PHONY : src/CMakeFiles/lesson02.dir/build

src/CMakeFiles/lesson02.dir/clean:
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src && $(CMAKE_COMMAND) -P CMakeFiles/lesson02.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/lesson02.dir/clean

src/CMakeFiles/lesson02.dir/depend:
	cd /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02 /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/src /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src /home/noah/Documents/code/Data-Structures-and-Algorithms/lesson02/build/src/CMakeFiles/lesson02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/lesson02.dir/depend

