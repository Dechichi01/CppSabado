/*
	. Destructor
	. Copy Constructor: Creates a new object as a copy of another one
		Class a();
		Class b = a;
		. There is several ways to make a copy constructor (const, non const, etc)

	. Copy assignment constructor: Like copy constructor, but not for a new intstance. There for stuff needs cleaning, and self assignment should be handled.
		Class a();
		Class b();
		a = b;
		. There are several ways of making copy assignment constructor
*/

#include <stdlib.h>
#include <iostream>

#define LOG(x) std::cout << x << std::endl

class String {
private:
	char* m_Buffer;
	unsigned int m_Size;

public:
	String(const char* str) {
		LOG("Constructor called!");
		m_Size = strlen(str);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, str, m_Size);
		m_Buffer[m_Size] = 0;
	}

	~String() {
		LOG("Destructor");
		delete[] m_Buffer;
	}

	String(const String& other) {
		LOG("Copy constructor");
		m_Size = other.m_Size;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	String& operator=(const String& other) { //Copy assign constructor (I'm being sent to another guy)
		LOG("Assignment operator called");
		if (this == &other) {
			LOG("EQUALS!");
			return *this;
		}

		delete[] m_Buffer;

		m_Size = other.m_Size;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);

		return *this;
	}
};

//int main() {
//	{
//		String a("Test 1");
//	}
//
//	String a("Test 1");
//	String b(a);
//	String c = b;
//	String d("d");
//	d = b;
//	d = d;
//}