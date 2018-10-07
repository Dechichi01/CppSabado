#include <iostream>
#include <stdlib.h>

/*
	. Any = (assign operator) involves a coping. With pointers, it copies the pointer value, which represents a problem (shallow copy)
*/
class String {
private:
	char* m_Buffer;
	int m_Size;
public:
	String(const char* str) {
		m_Size = strlen(str);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, str, m_Size);
		m_Buffer[m_Size] = 0;
	}

	~String() {
		delete[] m_Buffer;
	}

	//Copy constructor
	String(const String& other) 
		: m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& str);
};

std::ostream& operator<<(std::ostream& stream, const String& str) {
	stream << str.m_Buffer;
	return stream;
}

//int main()
//{
//	String s1("My String!");
//
//	//Without the copy constructor, this crashes the application
//	String s2 = s1;
//
//	std::cin.get();
//}