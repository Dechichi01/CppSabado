/*
	. Linking requires an entry point (for exe)  
	. Will try to find all function DEFINITIONS by their signature (name, type, parameters)
	. Static -> Can tell the linker the function is only going to be used in the translation unit, and does not have to be linked
	. Duplicate functions in same file (Compile error), in different files (Linking error)
	. Duplicate symbols can happen with multiple #include statements (not necessary solvable with #pragma once)
*/