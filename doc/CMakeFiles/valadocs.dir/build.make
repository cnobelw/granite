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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cw/下载/granite-0.3.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cw/下载/granite-0.3.0

# Utility rule file for valadocs.

# Include the progress variables for this target.
include doc/CMakeFiles/valadocs.dir/progress.make

valadocs: doc/CMakeFiles/valadocs.dir/build.make
	cd /home/cw/下载/granite-0.3.0/doc && rm /home/cw/下载/granite-0.3.0/doc/images -R -f
	cd /home/cw/下载/granite-0.3.0/doc && cp /home/cw/下载/granite-0.3.0/doc/images/ /home/cw/下载/granite-0.3.0/doc/images -R
	cd /home/cw/下载/granite-0.3.0/doc && rm /home/cw/下载/granite-0.3.0/doc/valadocs -R -f
	cd /home/cw/下载/granite-0.3.0/doc && valadoc --pkg=gtk+-3.0 --pkg=gio-unix-2.0 --pkg=posix --pkg=gee-0.8 /home/cw/下载/granite-0.3.0/lib/*.vala /home/cw/下载/granite-0.3.0/lib/*/*.vala /home/cw/下载/granite-0.3.0/lib/*.vapi --target-glib=2.32 --package-name=granite --package-version=0.3.0 --doclet=html -o /home/cw/下载/granite-0.3.0/doc/valadocs
.PHONY : valadocs

# Rule to build all files generated by this target.
doc/CMakeFiles/valadocs.dir/build: valadocs

.PHONY : doc/CMakeFiles/valadocs.dir/build

doc/CMakeFiles/valadocs.dir/clean:
	cd /home/cw/下载/granite-0.3.0/doc && $(CMAKE_COMMAND) -P CMakeFiles/valadocs.dir/cmake_clean.cmake
.PHONY : doc/CMakeFiles/valadocs.dir/clean

doc/CMakeFiles/valadocs.dir/depend:
	cd /home/cw/下载/granite-0.3.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cw/下载/granite-0.3.0 /home/cw/下载/granite-0.3.0/doc /home/cw/下载/granite-0.3.0 /home/cw/下载/granite-0.3.0/doc /home/cw/下载/granite-0.3.0/doc/CMakeFiles/valadocs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc/CMakeFiles/valadocs.dir/depend
