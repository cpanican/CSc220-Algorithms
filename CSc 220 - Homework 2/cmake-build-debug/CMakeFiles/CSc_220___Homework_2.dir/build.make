# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /cygdrive/c/Users/Chris/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Chris/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CSc_220___Homework_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CSc_220___Homework_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CSc_220___Homework_2.dir/flags.make

CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o: CMakeFiles/CSc_220___Homework_2.dir/flags.make
CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o -c "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/main.cpp"

CMakeFiles/CSc_220___Homework_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSc_220___Homework_2.dir/main.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/main.cpp" > CMakeFiles/CSc_220___Homework_2.dir/main.cpp.i

CMakeFiles/CSc_220___Homework_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSc_220___Homework_2.dir/main.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/main.cpp" -o CMakeFiles/CSc_220___Homework_2.dir/main.cpp.s

CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o.requires

CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o.provides: CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CSc_220___Homework_2.dir/build.make CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o.provides

CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o.provides.build: CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o


# Object files for target CSc_220___Homework_2
CSc_220___Homework_2_OBJECTS = \
"CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o"

# External object files for target CSc_220___Homework_2
CSc_220___Homework_2_EXTERNAL_OBJECTS =

CSc_220___Homework_2.exe: CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o
CSc_220___Homework_2.exe: CMakeFiles/CSc_220___Homework_2.dir/build.make
CSc_220___Homework_2.exe: CMakeFiles/CSc_220___Homework_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CSc_220___Homework_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CSc_220___Homework_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CSc_220___Homework_2.dir/build: CSc_220___Homework_2.exe

.PHONY : CMakeFiles/CSc_220___Homework_2.dir/build

CMakeFiles/CSc_220___Homework_2.dir/requires: CMakeFiles/CSc_220___Homework_2.dir/main.cpp.o.requires

.PHONY : CMakeFiles/CSc_220___Homework_2.dir/requires

CMakeFiles/CSc_220___Homework_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CSc_220___Homework_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CSc_220___Homework_2.dir/clean

CMakeFiles/CSc_220___Homework_2.dir/depend:
	cd "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2" "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2" "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/cmake-build-debug" "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/cmake-build-debug" "/cygdrive/c/Users/Chris/ClionProjects/CSc 220 - Homework 2/cmake-build-debug/CMakeFiles/CSc_220___Homework_2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CSc_220___Homework_2.dir/depend

