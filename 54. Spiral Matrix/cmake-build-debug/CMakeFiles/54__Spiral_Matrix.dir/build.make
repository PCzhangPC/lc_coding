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
CMAKE_SOURCE_DIR = "F:\code practice\myds\leetcode\54. Spiral Matrix"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\code practice\myds\leetcode\54. Spiral Matrix\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/54__Spiral_Matrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/54__Spiral_Matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/54__Spiral_Matrix.dir/flags.make

CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj: CMakeFiles/54__Spiral_Matrix.dir/flags.make
CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\code practice\myds\leetcode\54. Spiral Matrix\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\54__Spiral_Matrix.dir\main.cpp.obj -c "F:\code practice\myds\leetcode\54. Spiral Matrix\main.cpp"

CMakeFiles/54__Spiral_Matrix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/54__Spiral_Matrix.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\code practice\myds\leetcode\54. Spiral Matrix\main.cpp" > CMakeFiles\54__Spiral_Matrix.dir\main.cpp.i

CMakeFiles/54__Spiral_Matrix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/54__Spiral_Matrix.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\code practice\myds\leetcode\54. Spiral Matrix\main.cpp" -o CMakeFiles\54__Spiral_Matrix.dir\main.cpp.s

CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj.requires

CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj.provides: CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\54__Spiral_Matrix.dir\build.make CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj.provides

CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj.provides.build: CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj


# Object files for target 54__Spiral_Matrix
54__Spiral_Matrix_OBJECTS = \
"CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj"

# External object files for target 54__Spiral_Matrix
54__Spiral_Matrix_EXTERNAL_OBJECTS =

54__Spiral_Matrix.exe: CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj
54__Spiral_Matrix.exe: CMakeFiles/54__Spiral_Matrix.dir/build.make
54__Spiral_Matrix.exe: CMakeFiles/54__Spiral_Matrix.dir/linklibs.rsp
54__Spiral_Matrix.exe: CMakeFiles/54__Spiral_Matrix.dir/objects1.rsp
54__Spiral_Matrix.exe: CMakeFiles/54__Spiral_Matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\code practice\myds\leetcode\54. Spiral Matrix\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 54__Spiral_Matrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\54__Spiral_Matrix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/54__Spiral_Matrix.dir/build: 54__Spiral_Matrix.exe

.PHONY : CMakeFiles/54__Spiral_Matrix.dir/build

CMakeFiles/54__Spiral_Matrix.dir/requires: CMakeFiles/54__Spiral_Matrix.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/54__Spiral_Matrix.dir/requires

CMakeFiles/54__Spiral_Matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\54__Spiral_Matrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/54__Spiral_Matrix.dir/clean

CMakeFiles/54__Spiral_Matrix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\code practice\myds\leetcode\54. Spiral Matrix" "F:\code practice\myds\leetcode\54. Spiral Matrix" "F:\code practice\myds\leetcode\54. Spiral Matrix\cmake-build-debug" "F:\code practice\myds\leetcode\54. Spiral Matrix\cmake-build-debug" "F:\code practice\myds\leetcode\54. Spiral Matrix\cmake-build-debug\CMakeFiles\54__Spiral_Matrix.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/54__Spiral_Matrix.dir/depend

