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
CMAKE_SOURCE_DIR = "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/5__Longest_Palindromic_Substring.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/5__Longest_Palindromic_Substring.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/5__Longest_Palindromic_Substring.dir/flags.make

CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj: CMakeFiles/5__Longest_Palindromic_Substring.dir/flags.make
CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\5__Longest_Palindromic_Substring.dir\main.cpp.obj -c "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\main.cpp"

CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\main.cpp" > CMakeFiles\5__Longest_Palindromic_Substring.dir\main.cpp.i

CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\main.cpp" -o CMakeFiles\5__Longest_Palindromic_Substring.dir\main.cpp.s

CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj.requires

CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj.provides: CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\5__Longest_Palindromic_Substring.dir\build.make CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj.provides

CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj.provides.build: CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj


# Object files for target 5__Longest_Palindromic_Substring
5__Longest_Palindromic_Substring_OBJECTS = \
"CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj"

# External object files for target 5__Longest_Palindromic_Substring
5__Longest_Palindromic_Substring_EXTERNAL_OBJECTS =

5__Longest_Palindromic_Substring.exe: CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj
5__Longest_Palindromic_Substring.exe: CMakeFiles/5__Longest_Palindromic_Substring.dir/build.make
5__Longest_Palindromic_Substring.exe: CMakeFiles/5__Longest_Palindromic_Substring.dir/linklibs.rsp
5__Longest_Palindromic_Substring.exe: CMakeFiles/5__Longest_Palindromic_Substring.dir/objects1.rsp
5__Longest_Palindromic_Substring.exe: CMakeFiles/5__Longest_Palindromic_Substring.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 5__Longest_Palindromic_Substring.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\5__Longest_Palindromic_Substring.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/5__Longest_Palindromic_Substring.dir/build: 5__Longest_Palindromic_Substring.exe

.PHONY : CMakeFiles/5__Longest_Palindromic_Substring.dir/build

CMakeFiles/5__Longest_Palindromic_Substring.dir/requires: CMakeFiles/5__Longest_Palindromic_Substring.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/5__Longest_Palindromic_Substring.dir/requires

CMakeFiles/5__Longest_Palindromic_Substring.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\5__Longest_Palindromic_Substring.dir\cmake_clean.cmake
.PHONY : CMakeFiles/5__Longest_Palindromic_Substring.dir/clean

CMakeFiles/5__Longest_Palindromic_Substring.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring" "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring" "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\cmake-build-debug" "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\cmake-build-debug" "C:\Users\Administrator\Desktop\myds\leetcode\5. Longest Palindromic Substring\cmake-build-debug\CMakeFiles\5__Longest_Palindromic_Substring.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/5__Longest_Palindromic_Substring.dir/depend

