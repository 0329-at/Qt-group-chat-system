# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Cmake\build\bin\Release\cmake.exe

# The command to remove a file.
RM = D:\Cmake\build\bin\Release\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\qt_聊天室\qq_01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\qt_聊天室\qq_01\build

# Utility rule file for qq_01_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/qq_01_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qq_01_autogen.dir/progress.make

CMakeFiles/qq_01_autogen: qq_01_autogen/timestamp

qq_01_autogen/timestamp: D:/Qt/6.8.0/llvm-mingw_64/./bin/moc.exe
qq_01_autogen/timestamp: D:/Qt/6.8.0/llvm-mingw_64/./bin/uic.exe
qq_01_autogen/timestamp: CMakeFiles/qq_01_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=E:\qt_聊天室\qq_01\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target qq_01"
	D:\Cmake\build\bin\Release\cmake.exe -E cmake_autogen E:/qt_聊天室/qq_01/build/CMakeFiles/qq_01_autogen.dir/AutogenInfo.json Release
	D:\Cmake\build\bin\Release\cmake.exe -E touch E:/qt_聊天室/qq_01/build/qq_01_autogen/timestamp

CMakeFiles/qq_01_autogen.dir/codegen:
.PHONY : CMakeFiles/qq_01_autogen.dir/codegen

qq_01_autogen: CMakeFiles/qq_01_autogen
qq_01_autogen: qq_01_autogen/timestamp
qq_01_autogen: CMakeFiles/qq_01_autogen.dir/build.make
.PHONY : qq_01_autogen

# Rule to build all files generated by this target.
CMakeFiles/qq_01_autogen.dir/build: qq_01_autogen
.PHONY : CMakeFiles/qq_01_autogen.dir/build

CMakeFiles/qq_01_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\qq_01_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/qq_01_autogen.dir/clean

CMakeFiles/qq_01_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\qt_聊天室\qq_01 E:\qt_聊天室\qq_01 E:\qt_聊天室\qq_01\build E:\qt_聊天室\qq_01\build E:\qt_聊天室\qq_01\build\CMakeFiles\qq_01_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/qq_01_autogen.dir/depend

