/*
	. Main purpose of NEW is to allocate memoty on the HEAP (of anything)
		. It means that the process have to look for a continuous chunk of memoty that meets the size, or ask the SO for more
		. Usually "new" calls malloc  
*/

#include<stdlib.h>

class Entity {
private:
	int i;
};

//int main() {
//	Entity* e;
//	{
//		Entity entity();//created in the stack
//		Entity entity2 = Entity();//Also created in the stack
//		e = &entity();
//	}
//	// out of scope, lost reference
//
//	Entity* e2;
//	{
//		Entity* entity2 = new Entity(); // Created on the heap
//		e2 = entity2;
//	}
//
//	delete e2;//
//
//	// new keyword is a operator. This
//	Entity* e3 = new Entity();
//	// Is uually equal to this
//	Entity* e4 = (Entity*)malloc(sizeof(Entity));// + calling the constructor
//
//	delete e2, e3;
//}