# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Kranos.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Kranos.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Kranos.dir\flags.make

CMakeFiles\Kranos.dir\Kranos\Entry.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\Entry.cpp.obj: ..\Kranos\Entry.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Kranos.dir/Kranos/Entry.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\Entry.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Entry.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Entry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/Entry.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\Entry.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Entry.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Entry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/Entry.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\Entry.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Entry.cpp
<<

CMakeFiles\Kranos.dir\glad.c.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\glad.c.obj: ..\glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Kranos.dir/glad.c.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Kranos.dir\glad.c.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\glad.c
<<

CMakeFiles\Kranos.dir\glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Kranos.dir/glad.c.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\glad.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\glad.c
<<

CMakeFiles\Kranos.dir\glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Kranos.dir/glad.c.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\glad.c.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\glad.c
<<

CMakeFiles\Kranos.dir\Kranos\Application.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\Application.cpp.obj: ..\Kranos\Application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Kranos.dir/Kranos/Application.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\Application.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Application.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/Application.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\Application.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Application.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/Application.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\Application.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Application.cpp
<<

CMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.obj: ..\Kranos\KranosContext.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Kranos.dir/Kranos/KranosContext.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\KranosContext.cpp
<<

CMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/KranosContext.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\KranosContext.cpp
<<

CMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/KranosContext.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\KranosContext.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Log.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\Log.cpp.obj: ..\Kranos\Log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Kranos.dir/Kranos/Log.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\Log.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Log.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/Log.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\Log.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Log.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/Log.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\Log.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Log.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.obj: ..\Kranos\Window\WindowsWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Kranos.dir/Kranos/Window/WindowsWindow.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Window\WindowsWindow.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/Window/WindowsWindow.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Window\WindowsWindow.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/Window/WindowsWindow.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Window\WindowsWindow.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Layer.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\Layer.cpp.obj: ..\Kranos\Layer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Kranos.dir/Kranos/Layer.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\Layer.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Layer.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Layer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/Layer.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\Layer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Layer.cpp
<<

CMakeFiles\Kranos.dir\Kranos\Layer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/Layer.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\Layer.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\Layer.cpp
<<

CMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.obj: ..\Kranos\LayerStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Kranos.dir/Kranos/LayerStack.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\LayerStack.cpp
<<

CMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/LayerStack.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\LayerStack.cpp
<<

CMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/LayerStack.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\LayerStack.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.obj: ..\Kranos\GUI\NuklearLayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Kranos.dir/Kranos/GUI/NuklearLayer.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\NuklearLayer.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/GUI/NuklearLayer.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\NuklearLayer.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/GUI/NuklearLayer.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\NuklearLayer.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.obj: ..\Kranos\GUI\Panel\MenuPanel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Kranos.dir/Kranos/GUI/Panel/MenuPanel.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\MenuPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/GUI/Panel/MenuPanel.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\MenuPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/GUI/Panel/MenuPanel.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\MenuPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.obj: ..\Kranos\GUI\Panel\PropertyPanel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Kranos.dir/Kranos/GUI/Panel/PropertyPanel.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\PropertyPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/GUI/Panel/PropertyPanel.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\PropertyPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/GUI/Panel/PropertyPanel.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\PropertyPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.obj: ..\Kranos\GUI\Panel\HierarchyPanel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Kranos.dir/Kranos/GUI/Panel/HierarchyPanel.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\HierarchyPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/GUI/Panel/HierarchyPanel.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\HierarchyPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/GUI/Panel/HierarchyPanel.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\HierarchyPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.obj: ..\Kranos\GUI\Panel\ContentPanel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Kranos.dir/Kranos/GUI/Panel/ContentPanel.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\ContentPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/GUI/Panel/ContentPanel.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\ContentPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/GUI/Panel/ContentPanel.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\ContentPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.obj: CMakeFiles\Kranos.dir\flags.make
CMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.obj: ..\Kranos\GUI\Panel\LogPanel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Kranos.dir/Kranos/GUI/Panel/LogPanel.cpp.obj"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.obj /FdCMakeFiles\Kranos.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\LogPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kranos.dir/Kranos/GUI/Panel/LogPanel.cpp.i"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\LogPanel.cpp
<<

CMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kranos.dir/Kranos/GUI/Panel/LogPanel.cpp.s"
	C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\Kranos\GUI\Panel\LogPanel.cpp
<<

# Object files for target Kranos
Kranos_OBJECTS = \
"CMakeFiles\Kranos.dir\Kranos\Entry.cpp.obj" \
"CMakeFiles\Kranos.dir\glad.c.obj" \
"CMakeFiles\Kranos.dir\Kranos\Application.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\Log.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\Layer.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.obj" \
"CMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.obj"

# External object files for target Kranos
Kranos_EXTERNAL_OBJECTS =

Kranos.exe: CMakeFiles\Kranos.dir\Kranos\Entry.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\glad.c.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\Application.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\KranosContext.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\Log.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\Window\WindowsWindow.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\Layer.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\LayerStack.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\GUI\NuklearLayer.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\GUI\Panel\MenuPanel.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\GUI\Panel\PropertyPanel.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\GUI\Panel\HierarchyPanel.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\GUI\Panel\ContentPanel.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\Kranos\GUI\Panel\LogPanel.cpp.obj
Kranos.exe: CMakeFiles\Kranos.dir\build.make
Kranos.exe: ..\..\Deps\GLFW\lib\glfw3.lib
Kranos.exe: ..\..\Deps\ASSIMP\lib\assimp-vc142-mtd.lib
Kranos.exe: ..\..\Deps\ASSIMP\lib\zlibstaticd.lib
Kranos.exe: ..\..\Deps\ASSIMP\lib\IrrXMLd.lib
Kranos.exe: ..\..\Deps\ASSIMP\lib\zlibd.lib
Kranos.exe: CMakeFiles\Kranos.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable Kranos.exe"
	"C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Kranos.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\Kranos.dir\objects1.rsp @<<
 /out:Kranos.exe /implib:Kranos.lib /pdb:C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\Kranos.pdb /version:0.0  /machine:x64 /debug /INCREMENTAL /subsystem:console  ..\..\Deps\GLFW\lib\glfw3.lib ..\..\Deps\ASSIMP\lib\assimp-vc142-mtd.lib ..\..\Deps\ASSIMP\lib\zlibstaticd.lib ..\..\Deps\ASSIMP\lib\IrrXMLd.lib ..\..\Deps\ASSIMP\lib\zlibd.lib opengl32.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Kranos.dir\build: Kranos.exe

.PHONY : CMakeFiles\Kranos.dir\build

CMakeFiles\Kranos.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Kranos.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Kranos.dir\clean

CMakeFiles\Kranos.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug C:\Users\kdahi\OneDrive\Documents\Clion\Kranos\Src\cmake-build-debug\CMakeFiles\Kranos.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Kranos.dir\depend

