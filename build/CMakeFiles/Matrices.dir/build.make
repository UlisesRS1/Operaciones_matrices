# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\cmake-3.30.0-rc3-windows-x86_64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\cmake-3.30.0-rc3-windows-x86_64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build"

# Include any dependencies generated for this target.
include CMakeFiles\Matrices.dir\depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles\Matrices.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\Matrices.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Matrices.dir\flags.make

CMakeFiles\Matrices.dir\src\Fraccion.cpp.obj: CMakeFiles\Matrices.dir\flags.make
CMakeFiles\Matrices.dir\src\Fraccion.cpp.obj: "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\Fraccion.cpp"
CMakeFiles\Matrices.dir\src\Fraccion.cpp.obj: CMakeFiles\Matrices.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Matrices.dir/src/Fraccion.cpp.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Matrices.dir\src\Fraccion.cpp.obj.d --working-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build" --filter-prefix="Nota: inclusi�n del archivo: " -- C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /showIncludes /FoCMakeFiles\Matrices.dir\src\Fraccion.cpp.obj /FdCMakeFiles\Matrices.dir\ /FS -c "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\Fraccion.cpp"
<<

CMakeFiles\Matrices.dir\src\Fraccion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Matrices.dir/src/Fraccion.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Matrices.dir\src\Fraccion.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\Fraccion.cpp"
<<

CMakeFiles\Matrices.dir\src\Fraccion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Matrices.dir/src/Fraccion.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Matrices.dir\src\Fraccion.cpp.s /c "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\Fraccion.cpp"
<<

CMakeFiles\Matrices.dir\src\Matriz.cpp.obj: CMakeFiles\Matrices.dir\flags.make
CMakeFiles\Matrices.dir\src\Matriz.cpp.obj: "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\Matriz.cpp"
CMakeFiles\Matrices.dir\src\Matriz.cpp.obj: CMakeFiles\Matrices.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Matrices.dir/src/Matriz.cpp.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Matrices.dir\src\Matriz.cpp.obj.d --working-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build" --filter-prefix="Nota: inclusi�n del archivo: " -- C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /showIncludes /FoCMakeFiles\Matrices.dir\src\Matriz.cpp.obj /FdCMakeFiles\Matrices.dir\ /FS -c "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\Matriz.cpp"
<<

CMakeFiles\Matrices.dir\src\Matriz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Matrices.dir/src/Matriz.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Matrices.dir\src\Matriz.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\Matriz.cpp"
<<

CMakeFiles\Matrices.dir\src\Matriz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Matrices.dir/src/Matriz.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Matrices.dir\src\Matriz.cpp.s /c "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\Matriz.cpp"
<<

CMakeFiles\Matrices.dir\src\StringUtils.cpp.obj: CMakeFiles\Matrices.dir\flags.make
CMakeFiles\Matrices.dir\src\StringUtils.cpp.obj: "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\StringUtils.cpp"
CMakeFiles\Matrices.dir\src\StringUtils.cpp.obj: CMakeFiles\Matrices.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Matrices.dir/src/StringUtils.cpp.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Matrices.dir\src\StringUtils.cpp.obj.d --working-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build" --filter-prefix="Nota: inclusi�n del archivo: " -- C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /showIncludes /FoCMakeFiles\Matrices.dir\src\StringUtils.cpp.obj /FdCMakeFiles\Matrices.dir\ /FS -c "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\StringUtils.cpp"
<<

CMakeFiles\Matrices.dir\src\StringUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Matrices.dir/src/StringUtils.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Matrices.dir\src\StringUtils.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\StringUtils.cpp"
<<

CMakeFiles\Matrices.dir\src\StringUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Matrices.dir/src/StringUtils.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Matrices.dir\src\StringUtils.cpp.s /c "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\src\StringUtils.cpp"
<<

CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.obj: CMakeFiles\Matrices.dir\flags.make
CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.obj: "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\tests\StringUtils_14-07-2024.cpp"
CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.obj: CMakeFiles\Matrices.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Matrices.dir/tests/StringUtils_14-07-2024.cpp.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.obj.d --working-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build" --filter-prefix="Nota: inclusi�n del archivo: " -- C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /showIncludes /FoCMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.obj /FdCMakeFiles\Matrices.dir\ /FS -c "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\tests\StringUtils_14-07-2024.cpp"
<<

CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Matrices.dir/tests/StringUtils_14-07-2024.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\tests\StringUtils_14-07-2024.cpp"
<<

CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Matrices.dir/tests/StringUtils_14-07-2024.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.s /c "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\tests\StringUtils_14-07-2024.cpp"
<<

# Object files for target Matrices
Matrices_OBJECTS = \
"CMakeFiles\Matrices.dir\src\Fraccion.cpp.obj" \
"CMakeFiles\Matrices.dir\src\Matriz.cpp.obj" \
"CMakeFiles\Matrices.dir\src\StringUtils.cpp.obj" \
"CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.obj"

# External object files for target Matrices
Matrices_EXTERNAL_OBJECTS =

Matrices.exe: CMakeFiles\Matrices.dir\src\Fraccion.cpp.obj
Matrices.exe: CMakeFiles\Matrices.dir\src\Matriz.cpp.obj
Matrices.exe: CMakeFiles\Matrices.dir\src\StringUtils.cpp.obj
Matrices.exe: CMakeFiles\Matrices.dir\tests\StringUtils_14-07-2024.cpp.obj
Matrices.exe: CMakeFiles\Matrices.dir\build.make
Matrices.exe: CMakeFiles\Matrices.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Matrices.exe"
	"C:\Program Files\cmake-3.30.0-rc3-windows-x86_64\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Matrices.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Matrices.dir\objects1.rsp @<<
 /out:Matrices.exe /implib:Matrices.lib /pdb:"C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build\Matrices.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Matrices.dir\build: Matrices.exe
.PHONY : CMakeFiles\Matrices.dir\build

CMakeFiles\Matrices.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Matrices.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Matrices.dir\clean

CMakeFiles\Matrices.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices" "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices" "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build" "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build" "C:\Users\Uli Rodriguez\OneDrive\Documentos\2024\Matrices\build\CMakeFiles\Matrices.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles\Matrices.dir\depend

