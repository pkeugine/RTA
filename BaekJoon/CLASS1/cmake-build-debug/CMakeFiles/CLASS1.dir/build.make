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
CMAKE_COMMAND = "/Users/pkbook/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/pkbook/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CLASS1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CLASS1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CLASS1.dir/flags.make

CMakeFiles/CLASS1.dir/main.cpp.o: CMakeFiles/CLASS1.dir/flags.make
CMakeFiles/CLASS1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CLASS1.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CLASS1.dir/main.cpp.o -c /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/main.cpp

CMakeFiles/CLASS1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CLASS1.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/main.cpp > CMakeFiles/CLASS1.dir/main.cpp.i

CMakeFiles/CLASS1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CLASS1.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/main.cpp -o CMakeFiles/CLASS1.dir/main.cpp.s

# Object files for target CLASS1
CLASS1_OBJECTS = \
"CMakeFiles/CLASS1.dir/main.cpp.o"

# External object files for target CLASS1
CLASS1_EXTERNAL_OBJECTS =

CLASS1: CMakeFiles/CLASS1.dir/main.cpp.o
CLASS1: CMakeFiles/CLASS1.dir/build.make
CLASS1: CMakeFiles/CLASS1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CLASS1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CLASS1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CLASS1.dir/build: CLASS1

.PHONY : CMakeFiles/CLASS1.dir/build

CMakeFiles/CLASS1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CLASS1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CLASS1.dir/clean

CMakeFiles/CLASS1.dir/depend:
	cd /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1 /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1 /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/cmake-build-debug /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/cmake-build-debug /Users/pkbook/Dropbox/Codes/RTA/BaekJoon/CLASS1/cmake-build-debug/CMakeFiles/CLASS1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CLASS1.dir/depend
