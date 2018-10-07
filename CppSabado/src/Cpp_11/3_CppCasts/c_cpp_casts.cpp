#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class Base {
public:
	int x, y;

	virtual ~Base() {};
};

class Derived : public Base {
public:
	int z;
public:
	~Derived() {

	}
};

class Other {
public:
	int r, g, b;
	virtual ~Other() {};
};

//int main() {
//	{
//		/*
//		.Dynamic cast
//			. Used for safe convertions of pointers and references. Performs compile and run time checks (RTTI must be enabled)
//			. Compile time checks:
//				. Function is polymorphic
//				. Valid argument
//			. Base class must have at least one polymorphic function
//			. LIke "A as B" from C#
//		*/
//		Base* b = new Base();
//		Derived* d = new Derived();
//
//		Base* b2 = dynamic_cast<Base*>(d);//cpp style
//		Base* b3 = (Base*)&d;//c style, no checks
//		if (b2) {
//			LOG("Successfull upcast");
//		}
//
//		Derived* d2 = dynamic_cast<Derived*>(b);//cpp style, downcast
//		Derived* d3 = (Derived*)&b;//c style, no checks
//
//		if (d2) {
//			LOG("This shouldn't happen");
//		}
//
//		Other* other = new Other();
//		Base* b4 = dynamic_cast<Base*>(other);
//
//		if (b4) {
//			LOG("This shouldn't happen 2");
//		}
//	}
//
//	{
//		/*
//		. Static cast:
//			. Does not perform run time checks like dynamic cast. Perform compile time checks
//			. Compile time check:
//				. Valid type conversion
//			. Like (A) B from C#
//		*/
//		Base* b = new Base();
//		Derived* d = new Derived();
//
//		Base* b2 = static_cast<Base*>(d);//cpp style == c style
//		Base* b3 = (Base*)&d;//c style == cpp style in this case
//
//		Base* b4 = static_cast<Base*>(d);// cpp style == c style
//
//		Other* other = new Other();
//		//Base* b5 = static_cast<Base*>(other); ---> INvalid type conversion
//	}
//
//	{
//		/*
//		. Reinterpret cast:
//			. Type punning basically.
//		*/
//
//		Other* other = new Other();
//		Base* b = reinterpret_cast<Base*>(other);
//		int ptr = reinterpret_cast<int>(b);
//	}
//
//	{
//		/*
//		. Const cast:
//			. Takes out or add const to the type
//			. Removing the const of an object and writing to it afterwards is UNDEFINED BEHAVIOUR
//		*/
//
//		auto print = [](char* msg) {
//			LOG(msg);
//		};
//
//		const char* msg = "msg";
//		print(const_cast<char*>(msg));
//	}
//}