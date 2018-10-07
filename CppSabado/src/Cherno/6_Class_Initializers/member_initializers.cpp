/*
	. Member initializers set values while first initializing the class
	. Assignments in constructor body causes the variable to initialized twice. This is throwing performance away (mostly in nested objects)
	. YOU SHOULD BE USING MEMBER INITIALIZERS
	. Remember that raw c++ types are not initialized, only classes
*/

#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Example {
public:
	Example() {
		LOG("Initialized with ZERO");
	}

	Example(int x) {
		LOG("Initialized with X");
	}
};

class Entity {
private:
	Example m_Ex;

public:

	// This will call Example() and then Example(x)
	Entity(int x) {
		m_Ex = Example(x);
		LOG("Created entity");
	}
};

class Entity2 {
private:
	Example m_Ex;
public:
	// This will call only Example(x)
	Entity2(int x)
		: m_Ex(x)
	{
		LOG("Cteated entity 2");
	}
};

//int main() {
//	Entity e(8);
//	Entity2 e2(8);
//
//	std::cin.get();
//}