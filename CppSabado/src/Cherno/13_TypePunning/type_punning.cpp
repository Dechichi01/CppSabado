#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Entity {
private:
	int x, y; 

public:
	Entity(int x, int y)
		: x(x), y(y)
	{}
};

//int main() {
//	int a = 50;
//	double realConversion = (double)a;
//	double punned = *((double*)&a);//We're acessing 4 bytes of memory that aren't ours
//
//	LOG(a);
//	LOG(realConversion);
//	LOG(punned); 
//
//	//Class hack
//	Entity e(5,8);
//
//	//e.x;can't
//	int* ePtr = (int*)&e;
//
//	int y = *((char*)&e + 4);
//
//	LOG(ePtr[0]);//acessing x
//	LOG(ePtr[1]);//acessing y
//	LOG(y);
//}