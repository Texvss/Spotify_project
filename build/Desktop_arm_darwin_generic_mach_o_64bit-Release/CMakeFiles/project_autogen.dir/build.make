# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mansur/Desktop/Spotify_projectMisha

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mansur/Desktop/Spotify_projectMisha/build/Desktop_arm_darwin_generic_mach_o_64bit-Release

# Utility rule file for project_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/project_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/project_autogen.dir/progress.make

CMakeFiles/project_autogen: project_autogen/timestamp

project_autogen/timestamp: /opt/homebrew/share/qt/libexec/moc
project_autogen/timestamp: /opt/homebrew/share/qt/libexec/uic
project_autogen/timestamp: CMakeFiles/project_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/mansur/Desktop/Spotify_projectMisha/build/Desktop_arm_darwin_generic_mach_o_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target project"
	/Applications/CMake.app/Contents/bin/cmake -E cmake_autogen /Users/mansur/Desktop/Spotify_projectMisha/build/Desktop_arm_darwin_generic_mach_o_64bit-Release/CMakeFiles/project_autogen.dir/AutogenInfo.json Release
	/Applications/CMake.app/Contents/bin/cmake -E touch /Users/mansur/Desktop/Spotify_projectMisha/build/Desktop_arm_darwin_generic_mach_o_64bit-Release/project_autogen/timestamp

project_autogen: CMakeFiles/project_autogen
project_autogen: project_autogen/timestamp
project_autogen: CMakeFiles/project_autogen.dir/build.make
.PHONY : project_autogen

# Rule to build all files generated by this target.
CMakeFiles/project_autogen.dir/build: project_autogen
.PHONY : CMakeFiles/project_autogen.dir/build

CMakeFiles/project_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project_autogen.dir/clean

CMakeFiles/project_autogen.dir/depend:
	cd /Users/mansur/Desktop/Spotify_projectMisha/build/Desktop_arm_darwin_generic_mach_o_64bit-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mansur/Desktop/Spotify_projectMisha /Users/mansur/Desktop/Spotify_projectMisha /Users/mansur/Desktop/Spotify_projectMisha/build/Desktop_arm_darwin_generic_mach_o_64bit-Release /Users/mansur/Desktop/Spotify_projectMisha/build/Desktop_arm_darwin_generic_mach_o_64bit-Release /Users/mansur/Desktop/Spotify_projectMisha/build/Desktop_arm_darwin_generic_mach_o_64bit-Release/CMakeFiles/project_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/project_autogen.dir/depend

