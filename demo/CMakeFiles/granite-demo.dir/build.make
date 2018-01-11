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
CMAKE_SOURCE_DIR = /home/cw/文档/granite-0.3.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cw/文档/granite-0.3.0

# Include any dependencies generated for this target.
include demo/CMakeFiles/granite-demo.dir/depend.make

# Include the progress variables for this target.
include demo/CMakeFiles/granite-demo.dir/progress.make

# Include the compile flags for this target's objects.
include demo/CMakeFiles/granite-demo.dir/flags.make

demo/GraniteDemo.c: demo/granite-demo_valac.stamp


demo/granite-demo_valac.stamp: demo/GraniteDemo.vala
demo/granite-demo_valac.stamp: lib/granite.vapi
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cw/文档/granite-0.3.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating GraniteDemo.c"
	cd /home/cw/文档/granite-0.3.0/demo && /usr/bin/valac -C -b /home/cw/文档/granite-0.3.0/demo -d /home/cw/文档/granite-0.3.0/demo --pkg=gtk+-3.0 --pkg=gio-unix-2.0 --pkg=posix --pkg=gee-0.8 --thread --target-glib=2.32 --define=LINUX /home/cw/文档/granite-0.3.0/demo/GraniteDemo.vala /home/cw/文档/granite-0.3.0/demo/../lib/granite.vapi
	cd /home/cw/文档/granite-0.3.0/demo && touch /home/cw/文档/granite-0.3.0/demo/granite-demo_valac.stamp

demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o: demo/CMakeFiles/granite-demo.dir/flags.make
demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o: demo/GraniteDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cw/文档/granite-0.3.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o"
	cd /home/cw/文档/granite-0.3.0/demo && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/granite-demo.dir/GraniteDemo.c.o   -c /home/cw/文档/granite-0.3.0/demo/GraniteDemo.c

demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/granite-demo.dir/GraniteDemo.c.i"
	cd /home/cw/文档/granite-0.3.0/demo && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cw/文档/granite-0.3.0/demo/GraniteDemo.c > CMakeFiles/granite-demo.dir/GraniteDemo.c.i

demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/granite-demo.dir/GraniteDemo.c.s"
	cd /home/cw/文档/granite-0.3.0/demo && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cw/文档/granite-0.3.0/demo/GraniteDemo.c -o CMakeFiles/granite-demo.dir/GraniteDemo.c.s

demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o.requires:

.PHONY : demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o.requires

demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o.provides: demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o.requires
	$(MAKE) -f demo/CMakeFiles/granite-demo.dir/build.make demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o.provides.build
.PHONY : demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o.provides

demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o.provides.build: demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o


# Object files for target granite-demo
granite__demo_OBJECTS = \
"CMakeFiles/granite-demo.dir/GraniteDemo.c.o"

# External object files for target granite-demo
granite__demo_EXTERNAL_OBJECTS =

demo/granite-demo: demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o
demo/granite-demo: demo/CMakeFiles/granite-demo.dir/build.make
demo/granite-demo: lib/libgranite.so.2.0.1
demo/granite-demo: demo/CMakeFiles/granite-demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cw/文档/granite-0.3.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable granite-demo"
	cd /home/cw/文档/granite-0.3.0/demo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/granite-demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
demo/CMakeFiles/granite-demo.dir/build: demo/granite-demo

.PHONY : demo/CMakeFiles/granite-demo.dir/build

demo/CMakeFiles/granite-demo.dir/requires: demo/CMakeFiles/granite-demo.dir/GraniteDemo.c.o.requires

.PHONY : demo/CMakeFiles/granite-demo.dir/requires

demo/CMakeFiles/granite-demo.dir/clean:
	cd /home/cw/文档/granite-0.3.0/demo && $(CMAKE_COMMAND) -P CMakeFiles/granite-demo.dir/cmake_clean.cmake
.PHONY : demo/CMakeFiles/granite-demo.dir/clean

demo/CMakeFiles/granite-demo.dir/depend: demo/GraniteDemo.c
demo/CMakeFiles/granite-demo.dir/depend: demo/granite-demo_valac.stamp
	cd /home/cw/文档/granite-0.3.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cw/文档/granite-0.3.0 /home/cw/文档/granite-0.3.0/demo /home/cw/文档/granite-0.3.0 /home/cw/文档/granite-0.3.0/demo /home/cw/文档/granite-0.3.0/demo/CMakeFiles/granite-demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : demo/CMakeFiles/granite-demo.dir/depend

