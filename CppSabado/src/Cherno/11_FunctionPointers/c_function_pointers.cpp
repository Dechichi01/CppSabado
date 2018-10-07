#include<iostream>

// https://en.cppreference.com/w/cpp/language/lambda

int HelloWorld(const char* msg) {
	std::cout << "Hello World" << msg << std::endl;
	return 0;
}

//int main() {
//	//1
//	auto f1 = HelloWorld;
//
//	//2
//	int(*f2)(const char*) = HelloWorld;
//
//	//3
//	typedef int(*HelloWorldFunc)(const char*);
//
//	HelloWorldFunc f3 = HelloWorld;
//
//	f1("f1");
//	f2("f2");
//	f3("f3");
//
//	//lambda
//	void(*l)() = []() {
//		std::cout << "I'm a lambada" << std::endl;
//	};
//
//	l();
//
//	auto l2 = [&]() {
//		return 2;
//	};
//
//
//	std::cin.get();
//}