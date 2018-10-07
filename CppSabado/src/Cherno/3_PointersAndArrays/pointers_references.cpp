/*
	. Debug Memory: Debug -> Windows -> Memory
	. References are just aliases to variables. They do not necessarily create another variable, but will if passed to a function
*/

#include<iostream>

#define LOG(x) std::cout<< x << std::endl;

//int main() {
//	int var = 8;
//	int* ptr = &var;
//	*ptr = 10;
//
//
//	std::cin.get();
//}