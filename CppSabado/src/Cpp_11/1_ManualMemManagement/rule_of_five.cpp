/*
	. The two other overloads are due to MOVE SEMANTICS (shallow copy of temporary variables that are never going to be accessed again)
		. Happens when swapping

	. Move constructor
		. Make a shallow copy of the object
		. nullptr the other (signify the operation)

	. Move assignment operator
		. Delete the previous object
		. Make a shallow copy
		. nullptr the other (signify the operation)

	. DO NOT use const on Move semantics as this will make the compiler choose the Copy constructor
	. Cast and std::move can be used to enforce calls to the correct constructor
*/

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

#define LOG(x, name)

class String {
private:
	char* m_Buffer;
	unsigned int m_Size;

public:
	String() {
		m_Size = 1;
		m_Buffer = new char[2] { '!', 0};

		LOG("Default constructor", m_Buffer);
	}

	String(const char* str) {
		LOG("Constructor called!", str);
		m_Size = strlen(str);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, str, m_Size);
		m_Buffer[m_Size] = 0;
	}

	~String() {
		//LOG("Destructor", m_Buffer);
		delete[] m_Buffer;
	}

	String(const String& other) {
		LOG("Copy constructor", other.m_Buffer);
		m_Size = other.m_Size;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	String& operator=(const String& other) {
		LOG("Assignment operator called", other.m_Buffer);
		if (this == &other) {
			LOG("EQUALS!", other.m_Buffer);
			return *this;
		}

		delete[] m_Buffer;

		m_Size = other.m_Size;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);

		return *this;
	}

	String(String&& temp) {
		LOG("Move constructor", temp.m_Buffer);
		m_Size = temp.m_Size;
		m_Buffer = temp.m_Buffer;

		temp.m_Buffer = nullptr;
		temp.m_Size = 0;
	}

	String& operator=(String&& temp) {
		LOG("Move assignment operator!!", temp.m_Buffer);
		if (this != &temp) {
			delete[] m_Buffer;
			m_Size = temp.m_Size;
			m_Buffer = temp.m_Buffer;

			temp.m_Buffer = nullptr;
			temp.m_Size = 0;
		}

		return *this;
	}

	//To allow sorting
	bool operator<(const String& other) const 
	{
		return m_Size < other.m_Size;
	}
}; 

//int main() {
//	const int size = 100000;
//	//Without the move constructors, this operation would use the copy constructors
//	std::vector<String> v;
//	v.reserve(size);
//
//	auto start = std::chrono::high_resolution_clock::now();
//	for (int i = 0; i < size; i++)
//	{
//		if (i % 2) {
//			v.emplace_back("A");
//		}
//		else {
//			v.emplace_back("AAAAAAAA");
//		}
//	}
//	std::sort(v.begin(), v.end());
//
//	auto duration = std::chrono::high_resolution_clock::now() - start;
//
//	std::cout << duration.count() << std::endl;
//}