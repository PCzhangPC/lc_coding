# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/24__Swap_Nodes_in_Pairs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/24__Swap_Nodes_in_Pairs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/24__Swap_Nodes_in_Pairs.dir/flags.make

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/flags.make
CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\24__Swap_Nodes_in_Pairs.dir\main.cpp.obj -c "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\main.cpp"

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\main.cpp" > CMakeFiles\24__Swap_Nodes_in_Pairs.dir\main.cpp.i

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\main.cpp" -o CMakeFiles\24__Swap_Nodes_in_Pairs.dir\main.cpp.s

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj.requires

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj.provides: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\24__Swap_Nodes_in_Pairs.dir\build.make CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj.provides

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj.provides.build: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj


# Object files for target 24__Swap_Nodes_in_Pairs
24__Swap_Nodes_in_Pairs_OBJECTS = \
"CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj"

# External object files for target 24__Swap_Nodes_in_Pairs
24__Swap_Nodes_in_Pairs_EXTERNAL_OBJECTS =

24__Swap_Nodes_in_Pairs.exe: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj
24__Swap_Nodes_in_Pairs.exe: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/build.make
24__Swap_Nodes_in_Pairs.exe: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/linklibs.rsp
24__Swap_Nodes_in_Pairs.exe: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/objects1.rsp
24__Swap_Nodes_in_Pairs.exe: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 24__Swap_Nodes_in_Pairs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\24__Swap_Nodes_in_Pairs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/24__Swap_Nodes_in_Pairs.dir/build: 24__Swap_Nodes_in_Pairs.exe

.PHONY : CMakeFiles/24__Swap_Nodes_in_Pairs.dir/build

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/requires: CMakeFiles/24__Swap_Nodes_in_Pairs.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/24__Swap_Nodes_in_Pairs.dir/requires

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\24__Swap_Nodes_in_Pairs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/24__Swap_Nodes_in_Pairs.dir/clean

CMakeFiles/24__Swap_Nodes_in_Pairs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs" "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs" "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\cmake-build-debug" "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\cmake-build-debug" "F:\code practice\myds\leetcode\24. Swap Nodes in Pairs\cmake-build-debug\CMakeFiles\24__Swap_Nodes_in_Pairs.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/24__Swap_Nodes_in_Pairs.dir/depend

