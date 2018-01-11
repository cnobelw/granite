# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target package
package: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool..."
	/usr/bin/cpack --config ./CPackConfig.cmake
.PHONY : package

# Special rule for the target package
package/fast: package

.PHONY : package/fast

# Special rule for the target package_source
package_source:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool for source..."
	/usr/bin/cpack --config ./CPackSourceConfig.cmake /home/cw/下载/granite-0.3.0/CPackSourceConfig.cmake
.PHONY : package_source

# Special rule for the target package_source
package_source/fast: package_source

.PHONY : package_source/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/cw/下载/granite-0.3.0/CMakeFiles /home/cw/下载/granite-0.3.0/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/cw/下载/granite-0.3.0/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named dist

# Build rule for target.
dist: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 dist
.PHONY : dist

# fast build rule for target.
dist/fast:
	$(MAKE) -f CMakeFiles/dist.dir/build.make CMakeFiles/dist.dir/build
.PHONY : dist/fast

#=============================================================================
# Target rules for targets named granite

# Build rule for target.
granite: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 granite
.PHONY : granite

# fast build rule for target.
granite/fast:
	$(MAKE) -f lib/CMakeFiles/granite.dir/build.make lib/CMakeFiles/granite.dir/build
.PHONY : granite/fast

#=============================================================================
# Target rules for targets named granite-demo

# Build rule for target.
granite-demo: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 granite-demo
.PHONY : granite-demo

# fast build rule for target.
granite-demo/fast:
	$(MAKE) -f demo/CMakeFiles/granite-demo.dir/build.make demo/CMakeFiles/granite-demo.dir/build
.PHONY : granite-demo/fast

#=============================================================================
# Target rules for targets named valadocs

# Build rule for target.
valadocs: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 valadocs
.PHONY : valadocs

# fast build rule for target.
valadocs/fast:
	$(MAKE) -f doc/CMakeFiles/valadocs.dir/build.make doc/CMakeFiles/valadocs.dir/build
.PHONY : valadocs/fast

#=============================================================================
# Target rules for targets named docs

# Build rule for target.
docs: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 docs
.PHONY : docs

# fast build rule for target.
docs/fast:
	$(MAKE) -f doc/CMakeFiles/docs.dir/build.make doc/CMakeFiles/docs.dir/build
.PHONY : docs/fast

#=============================================================================
# Target rules for targets named cdocs

# Build rule for target.
cdocs: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 cdocs
.PHONY : cdocs

# fast build rule for target.
cdocs/fast:
	$(MAKE) -f doc/CMakeFiles/cdocs.dir/build.make doc/CMakeFiles/cdocs.dir/build
.PHONY : cdocs/fast

#=============================================================================
# Target rules for targets named i18n

# Build rule for target.
i18n: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 i18n
.PHONY : i18n

# fast build rule for target.
i18n/fast:
	$(MAKE) -f po/CMakeFiles/i18n.dir/build.make po/CMakeFiles/i18n.dir/build
.PHONY : i18n/fast

#=============================================================================
# Target rules for targets named pot

# Build rule for target.
pot: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 pot
.PHONY : pot

# fast build rule for target.
pot/fast:
	$(MAKE) -f po/CMakeFiles/pot.dir/build.make po/CMakeFiles/pot.dir/build
.PHONY : pot/fast

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... install/strip"
	@echo "... install/local"
	@echo "... install"
	@echo "... package"
	@echo "... package_source"
	@echo "... dist"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... list_install_components"
	@echo "... granite"
	@echo "... granite-demo"
	@echo "... valadocs"
	@echo "... docs"
	@echo "... cdocs"
	@echo "... i18n"
	@echo "... pot"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
