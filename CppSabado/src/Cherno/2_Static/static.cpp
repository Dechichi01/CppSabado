/*
In a file (global scope)
	. The function or variable is privated to the translation unit
	. The opposite of this is "extern" -> Tells linking to search for the definition of function/variable in another translation unit
	. Static should be used with the same intention ad PRIVATE in a class
*/

#include <iostream>
extern int i_Variable;

void Function() {}

//int main() {
//	std::cout << i_Variable << std::endl;
//	std::cin.get();
//}

/*
In a class:
. Variable: Only one instance of that variable shared by all instance of class
. Function: Can be called without a class instanc
*/

/*
In a function (Local scope):
. Has the lifetime of the entire program, inside the local scope (like a static variable in a class)
. static int i = 0 (set's it only once)
*/

class SingletonNoStaticLocal {
private :
	static SingletonNoStaticLocal* s_Instance;
public:
	static SingletonNoStaticLocal& Get() {
		return *s_Instance;
	}

	void Hello(){}
};


SingletonNoStaticLocal* SingletonNoStaticLocal::s_Instance = nullptr;

class Singleton {
public:
	static Singleton& Get() {
		static Singleton s_Instance;
		return s_Instance;
	}

	void Hello() {}
};

//int main() {
//	SingletonNoStaticLocal::Get().Hello();
//	Singleton::Get().Hello();
//
//	std::cin.get();
//}