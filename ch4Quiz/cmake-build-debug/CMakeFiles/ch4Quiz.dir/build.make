# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ryan/CLionProjects/ch4Quiz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ryan/CLionProjects/ch4Quiz/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ch4Quiz.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ch4Quiz.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ch4Quiz.dir/flags.make

CMakeFiles/ch4Quiz.dir/main.cpp.o: CMakeFiles/ch4Quiz.dir/flags.make
CMakeFiles/ch4Quiz.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ryan/CLionProjects/ch4Quiz/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ch4Quiz.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ch4Quiz.dir/main.cpp.o -c /Users/ryan/CLionProjects/ch4Quiz/main.cpp

CMakeFiles/ch4Quiz.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ch4Quiz.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ryan/CLionProjects/ch4Quiz/main.cpp > CMakeFiles/ch4Quiz.dir/main.cpp.i

CMakeFiles/ch4Quiz.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ch4Quiz.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ryan/CLionProjects/ch4Quiz/main.cpp -o CMakeFiles/ch4Quiz.dir/main.cpp.s

CMakeFiles/ch4Quiz.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ch4Quiz.dir/main.cpp.o.requires

CMakeFiles/ch4Quiz.dir/main.cpp.o.provides: CMakeFiles/ch4Quiz.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ch4Quiz.dir/build.make CMakeFiles/ch4Quiz.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ch4Quiz.dir/main.cpp.o.provides

CMakeFiles/ch4Quiz.dir/main.cpp.o.provides.build: CMakeFiles/ch4Quiz.dir/main.cpp.o


# Object files for target ch4Quiz
ch4Quiz_OBJECTS = \
"CMakeFiles/ch4Quiz.dir/main.cpp.o"

# External object files for target ch4Quiz
ch4Quiz_EXTERNAL_OBJECTS =

ch4Quiz: CMakeFiles/ch4Quiz.dir/main.cpp.o
ch4Quiz: CMakeFiles/ch4Quiz.dir/build.make
ch4Quiz: CMakeFiles/ch4Quiz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ryan/CLionProjects/ch4Quiz/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ch4Quiz"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ch4Quiz.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ch4Quiz.dir/build: ch4Quiz

.PHONY : CMakeFiles/ch4Quiz.dir/build

CMakeFiles/ch4Quiz.dir/requires: CMakeFiles/ch4Quiz.dir/main.cpp.o.requires

.PHONY : CMakeFiles/ch4Quiz.dir/requires

CMakeFiles/ch4Quiz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ch4Quiz.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ch4Quiz.dir/clean

CMakeFiles/ch4Quiz.dir/depend:
	cd /Users/ryan/CLionProjects/ch4Quiz/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ryan/CLionProjects/ch4Quiz /Users/ryan/CLionProjects/ch4Quiz /Users/ryan/CLionProjects/ch4Quiz/cmake-build-debug /Users/ryan/CLionProjects/ch4Quiz/cmake-build-debug /Users/ryan/CLionProjects/ch4Quiz/cmake-build-debug/CMakeFiles/ch4Quiz.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ch4Quiz.dir/depend

