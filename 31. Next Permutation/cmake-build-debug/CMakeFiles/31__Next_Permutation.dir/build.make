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
CMAKE_SOURCE_DIR = "F:\code practice\myds\leetcode\31. Next Permutation"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\code practice\myds\leetcode\31. Next Permutation\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/31__Next_Permutation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/31__Next_Permutation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/31__Next_Permutation.dir/flags.make

CMakeFiles/31__Next_Permutation.dir/main.cpp.obj: CMakeFiles/31__Next_Permutation.dir/flags.make
CMakeFiles/31__Next_Permutation.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\code practice\myds\leetcode\31. Next Permutation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/31__Next_Permutation.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\31__Next_Permutation.dir\main.cpp.obj -c "F:\code practice\myds\leetcode\31. Next Permutation\main.cpp"

CMakeFiles/31__Next_Permutation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/31__Next_Permutation.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\code practice\myds\leetcode\31. Next Permutation\main.cpp" > CMakeFiles\31__Next_Permutation.dir\main.cpp.i

CMakeFiles/31__Next_Permutation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/31__Next_Permutation.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\code practice\myds\leetcode\31. Next Permutation\main.cpp" -o CMakeFiles\31__Next_Permutation.dir\main.cpp.s

CMakeFiles/31__Next_Permutation.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/31__Next_Permutation.dir/main.cpp.obj.requires

CMakeFiles/31__Next_Permutation.dir/main.cpp.obj.provides: CMakeFiles/31__Next_Permutation.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\31__Next_Permutation.dir\build.make CMakeFiles/31__Next_Permutation.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/31__Next_Permutation.dir/main.cpp.obj.provides

CMakeFiles/31__Next_Permutation.dir/main.cpp.obj.provides.build: CMakeFiles/31__Next_Permutation.dir/main.cpp.obj


# Object files for target 31__Next_Permutation
31__Next_Permutation_OBJECTS = \
"CMakeFiles/31__Next_Permutation.dir/main.cpp.obj"

# External object files for target 31__Next_Permutation
31__Next_Permutation_EXTERNAL_OBJECTS =

31__Next_Permutation.exe: CMakeFiles/31__Next_Permutation.dir/main.cpp.obj
31__Next_Permutation.exe: CMakeFiles/31__Next_Permutation.dir/build.make
31__Next_Permutation.exe: CMakeFiles/31__Next_Permutation.dir/linklibs.rsp
31__Next_Permutation.exe: CMakeFiles/31__Next_Permutation.dir/objects1.rsp
31__Next_Permutation.exe: CMakeFiles/31__Next_Permutation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\code practice\myds\leetcode\31. Next Permutation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 31__Next_Permutation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\31__Next_Permutation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/31__Next_Permutation.dir/build: 31__Next_Permutation.exe

.PHONY : CMakeFiles/31__Next_Permutation.dir/build

CMakeFiles/31__Next_Permutation.dir/requires: CMakeFiles/31__Next_Permutation.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/31__Next_Permutation.dir/requires

CMakeFiles/31__Next_Permutation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\31__Next_Permutation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/31__Next_Permutation.dir/clean

CMakeFiles/31__Next_Permutation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\code practice\myds\leetcode\31. Next Permutation" "F:\code practice\myds\leetcode\31. Next Permutation" "F:\code practice\myds\leetcode\31. Next Permutation\cmake-build-debug" "F:\code practice\myds\leetcode\31. Next Permutation\cmake-build-debug" "F:\code practice\myds\leetcode\31. Next Permutation\cmake-build-debug\CMakeFiles\31__Next_Permutation.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/31__Next_Permutation.dir/depend

