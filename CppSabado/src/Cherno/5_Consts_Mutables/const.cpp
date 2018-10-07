#include <iostream>

/*
Classes:
	. Having const at the end of methods allow then to be called form a const& for the class (See PrintEntity)
	. Mutable keyword allows the variable to be changed IN A CONST MEHOTD of a class
*/
class Entity {
private :
	int m_X, m_Y;

	int* m_Pointer;

	mutable int var;

public:
	int GetX() const {
		//m_Y = 1; CANT
		var = 5;
		return m_X;
	}

	void SetX(int x) {
		m_X = x;
	}

	// returns a const const pointer, and promisses to not alter the class
	const int* const GetPointer() const {
		return m_Pointer;
	}
};

void PrintEntity(const Entity& e) {
	//e.SetX(10); CAN'T
	std::cout << e.GetX() << std::endl;
}

//int main() {
//
//	// Variables
//
//	int val = 10;
//	int val2 = 20;
//
//	int* a =&val;
//
//	const int* b = &val;
//	//*b = 10; can't
//	b = &val2;//can
//
//	int* const c = &val; //== references
//	*c = 20;//can
//	//c = &val2; can't
//
//}