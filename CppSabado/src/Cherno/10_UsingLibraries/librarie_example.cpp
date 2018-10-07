/*
	. Static linking: Happens at linking time, it actually takes the code or binary and ships it with the application
	. Dynamic linking (dll): Linking happens at runtime (slower). Can have a reference file with the location of all functions to speed things up
*/

/*
	Using a library:
		. Actually copy source (include + cpp) or bin to the project. No need for package manager
		. Project Properties -> C/C++ -> Additional include directories -> Add the directory path (using $SolutionDir) - This will solve Compiling
		. Project Properties -> Linking
				-> Input -> AdditionalDependencies. Add the name of the library to be linked
				-> General -> Additional Include Directories. Add the path o the directory containing the file

	Using DLL:
		. 1: Exe is aware of the DLL and list it as a requirement (50/50 static and dynamic)
		. 2: Completely dinamically, the exe have no idea of the dll, which can be loaded at any time
		. To use dll:
			. Like static linking, but in "Linking -> INput" use the dll.lib version

	Header Files:
		. Needs to be different for static and dynamic linking

	Custom libs and multiple projects in same solution:
		. Remember to add REFERENCE. No need to add static library. The compilation part is the same
			. It creates dependency graph
			. It recompiles the dependency if it chagned
*/

#include <iostream>

#include "GLFW/glfw3.h"
//extern "C" int glfwInit();

//int main() {
//	int a = glfwInit();
//
//	std::cin.get();
//}