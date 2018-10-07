#include<iostream>

template <class T>
class ScopedPtr {
private:
	T* m_Ptr;
public:
	ScopedPtr()
	{
		m_Ptr = new T();
	}

	~ScopedPtr() {
		delete m_Ptr;
	}

	void Do() {
		std::cout << "Do!" << std::endl;
	}
};

class Entity {
public:
	Entity() {
		std::cout << "Create" << std::endl;
	}

	~Entity() {
		std::cout << "Destroy" << std::endl;
	}
};

//int main() {
//	{
//		ScopedPtr<Entity> pointer = ScopedPtr<Entity>();
//		pointer.Do();
//	}
//	std::cin.get();
//}