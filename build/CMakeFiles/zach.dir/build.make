# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ilya/Рабочий стол/itiop/lab_2_1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ilya/Рабочий стол/itiop/lab_2_1/build"

# Include any dependencies generated for this target.
include CMakeFiles/zach.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/zach.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/zach.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zach.dir/flags.make

CMakeFiles/zach.dir/zach.cpp.o: CMakeFiles/zach.dir/flags.make
CMakeFiles/zach.dir/zach.cpp.o: ../zach.cpp
CMakeFiles/zach.dir/zach.cpp.o: CMakeFiles/zach.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ilya/Рабочий стол/itiop/lab_2_1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zach.dir/zach.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/zach.dir/zach.cpp.o -MF CMakeFiles/zach.dir/zach.cpp.o.d -o CMakeFiles/zach.dir/zach.cpp.o -c "/home/ilya/Рабочий стол/itiop/lab_2_1/zach.cpp"

CMakeFiles/zach.dir/zach.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zach.dir/zach.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ilya/Рабочий стол/itiop/lab_2_1/zach.cpp" > CMakeFiles/zach.dir/zach.cpp.i

CMakeFiles/zach.dir/zach.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zach.dir/zach.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ilya/Рабочий стол/itiop/lab_2_1/zach.cpp" -o CMakeFiles/zach.dir/zach.cpp.s

# Object files for target zach
zach_OBJECTS = \
"CMakeFiles/zach.dir/zach.cpp.o"

# External object files for target zach
zach_EXTERNAL_OBJECTS =

zach: CMakeFiles/zach.dir/zach.cpp.o
zach: CMakeFiles/zach.dir/build.make
zach: CMakeFiles/zach.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ilya/Рабочий стол/itiop/lab_2_1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zach"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zach.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zach.dir/build: zach
.PHONY : CMakeFiles/zach.dir/build

CMakeFiles/zach.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/zach.dir/cmake_clean.cmake
.PHONY : CMakeFiles/zach.dir/clean

CMakeFiles/zach.dir/depend:
	cd "/home/ilya/Рабочий стол/itiop/lab_2_1/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ilya/Рабочий стол/itiop/lab_2_1" "/home/ilya/Рабочий стол/itiop/lab_2_1" "/home/ilya/Рабочий стол/itiop/lab_2_1/build" "/home/ilya/Рабочий стол/itiop/lab_2_1/build" "/home/ilya/Рабочий стол/itiop/lab_2_1/build/CMakeFiles/zach.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/zach.dir/depend
