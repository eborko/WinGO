# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/borko/Documents/Projects/Software Development/CPP/WinGO"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build"

# Include any dependencies generated for this target.
include tests/unit-tests/CMakeFiles/UnitTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/unit-tests/CMakeFiles/UnitTests.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/unit-tests/CMakeFiles/UnitTests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/unit-tests/CMakeFiles/UnitTests.dir/flags.make

tests/unit-tests/CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o: tests/unit-tests/CMakeFiles/UnitTests.dir/flags.make
tests/unit-tests/CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o: tests/unit-tests/UnitTests_autogen/mocs_compilation.cpp
tests/unit-tests/CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o: tests/unit-tests/CMakeFiles/UnitTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/unit-tests/CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/unit-tests/CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o -MF CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o -c "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests/UnitTests_autogen/mocs_compilation.cpp"

tests/unit-tests/CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.i"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests/UnitTests_autogen/mocs_compilation.cpp" > CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.i

tests/unit-tests/CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.s"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests/UnitTests_autogen/mocs_compilation.cpp" -o CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.s

tests/unit-tests/CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o: tests/unit-tests/CMakeFiles/UnitTests.dir/flags.make
tests/unit-tests/CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o: ../tests/unit-tests/unit_tests_main.cpp
tests/unit-tests/CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o: tests/unit-tests/CMakeFiles/UnitTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/unit-tests/CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/unit-tests/CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o -MF CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o.d -o CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o -c "/home/borko/Documents/Projects/Software Development/CPP/WinGO/tests/unit-tests/unit_tests_main.cpp"

tests/unit-tests/CMakeFiles/UnitTests.dir/unit_tests_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnitTests.dir/unit_tests_main.cpp.i"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/borko/Documents/Projects/Software Development/CPP/WinGO/tests/unit-tests/unit_tests_main.cpp" > CMakeFiles/UnitTests.dir/unit_tests_main.cpp.i

tests/unit-tests/CMakeFiles/UnitTests.dir/unit_tests_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnitTests.dir/unit_tests_main.cpp.s"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/borko/Documents/Projects/Software Development/CPP/WinGO/tests/unit-tests/unit_tests_main.cpp" -o CMakeFiles/UnitTests.dir/unit_tests_main.cpp.s

tests/unit-tests/CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o: tests/unit-tests/CMakeFiles/UnitTests.dir/flags.make
tests/unit-tests/CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o: ../tests/unit-tests/TestUserAuthentication.cpp
tests/unit-tests/CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o: tests/unit-tests/CMakeFiles/UnitTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/unit-tests/CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/unit-tests/CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o -MF CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o.d -o CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o -c "/home/borko/Documents/Projects/Software Development/CPP/WinGO/tests/unit-tests/TestUserAuthentication.cpp"

tests/unit-tests/CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.i"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/borko/Documents/Projects/Software Development/CPP/WinGO/tests/unit-tests/TestUserAuthentication.cpp" > CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.i

tests/unit-tests/CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.s"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/borko/Documents/Projects/Software Development/CPP/WinGO/tests/unit-tests/TestUserAuthentication.cpp" -o CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.s

# Object files for target UnitTests
UnitTests_OBJECTS = \
"CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o" \
"CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o"

# External object files for target UnitTests
UnitTests_EXTERNAL_OBJECTS =

tests/unit-tests/UnitTests: tests/unit-tests/CMakeFiles/UnitTests.dir/UnitTests_autogen/mocs_compilation.cpp.o
tests/unit-tests/UnitTests: tests/unit-tests/CMakeFiles/UnitTests.dir/unit_tests_main.cpp.o
tests/unit-tests/UnitTests: tests/unit-tests/CMakeFiles/UnitTests.dir/TestUserAuthentication.cpp.o
tests/unit-tests/UnitTests: tests/unit-tests/CMakeFiles/UnitTests.dir/build.make
tests/unit-tests/UnitTests: libWinGO_Lib.so
tests/unit-tests/UnitTests: /home/borko/Qt/6.6.0/gcc_64/lib/libQt6Test.so.6.6.0
tests/unit-tests/UnitTests: /home/borko/Qt/6.6.0/gcc_64/lib/libQt6Widgets.so.6.6.0
tests/unit-tests/UnitTests: /home/borko/Qt/6.6.0/gcc_64/lib/libQt6Gui.so.6.6.0
tests/unit-tests/UnitTests: /home/borko/Qt/6.6.0/gcc_64/lib/libQt6Core.so.6.6.0
tests/unit-tests/UnitTests: /usr/lib/x86_64-linux-gnu/libGLX.so
tests/unit-tests/UnitTests: /usr/lib/x86_64-linux-gnu/libOpenGL.so
tests/unit-tests/UnitTests: tests/unit-tests/CMakeFiles/UnitTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable UnitTests"
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UnitTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/unit-tests/CMakeFiles/UnitTests.dir/build: tests/unit-tests/UnitTests
.PHONY : tests/unit-tests/CMakeFiles/UnitTests.dir/build

tests/unit-tests/CMakeFiles/UnitTests.dir/clean:
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" && $(CMAKE_COMMAND) -P CMakeFiles/UnitTests.dir/cmake_clean.cmake
.PHONY : tests/unit-tests/CMakeFiles/UnitTests.dir/clean

tests/unit-tests/CMakeFiles/UnitTests.dir/depend:
	cd "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/borko/Documents/Projects/Software Development/CPP/WinGO" "/home/borko/Documents/Projects/Software Development/CPP/WinGO/tests/unit-tests" "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build" "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests" "/home/borko/Documents/Projects/Software Development/CPP/WinGO/build/tests/unit-tests/CMakeFiles/UnitTests.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : tests/unit-tests/CMakeFiles/UnitTests.dir/depend

