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
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/marble/CLionProjects/AlgorithmPractice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marble/CLionProjects/AlgorithmPractice/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AlgorithmPractice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AlgorithmPractice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlgorithmPractice.dir/flags.make

CMakeFiles/AlgorithmPractice.dir/main.cpp.o: CMakeFiles/AlgorithmPractice.dir/flags.make
CMakeFiles/AlgorithmPractice.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marble/CLionProjects/AlgorithmPractice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AlgorithmPractice.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmPractice.dir/main.cpp.o -c /home/marble/CLionProjects/AlgorithmPractice/main.cpp

CMakeFiles/AlgorithmPractice.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmPractice.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marble/CLionProjects/AlgorithmPractice/main.cpp > CMakeFiles/AlgorithmPractice.dir/main.cpp.i

CMakeFiles/AlgorithmPractice.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmPractice.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marble/CLionProjects/AlgorithmPractice/main.cpp -o CMakeFiles/AlgorithmPractice.dir/main.cpp.s

# Object files for target AlgorithmPractice
AlgorithmPractice_OBJECTS = \
"CMakeFiles/AlgorithmPractice.dir/main.cpp.o"

# External object files for target AlgorithmPractice
AlgorithmPractice_EXTERNAL_OBJECTS =

AlgorithmPractice: CMakeFiles/AlgorithmPractice.dir/main.cpp.o
AlgorithmPractice: CMakeFiles/AlgorithmPractice.dir/build.make
AlgorithmPractice: CMakeFiles/AlgorithmPractice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marble/CLionProjects/AlgorithmPractice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AlgorithmPractice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AlgorithmPractice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlgorithmPractice.dir/build: AlgorithmPractice

.PHONY : CMakeFiles/AlgorithmPractice.dir/build

CMakeFiles/AlgorithmPractice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AlgorithmPractice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AlgorithmPractice.dir/clean

CMakeFiles/AlgorithmPractice.dir/depend:
	cd /home/marble/CLionProjects/AlgorithmPractice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marble/CLionProjects/AlgorithmPractice /home/marble/CLionProjects/AlgorithmPractice /home/marble/CLionProjects/AlgorithmPractice/cmake-build-debug /home/marble/CLionProjects/AlgorithmPractice/cmake-build-debug /home/marble/CLionProjects/AlgorithmPractice/cmake-build-debug/CMakeFiles/AlgorithmPractice.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AlgorithmPractice.dir/depend

