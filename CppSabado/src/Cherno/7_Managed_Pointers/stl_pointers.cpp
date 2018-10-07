#include <iostream>
#include <memory>

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
//
//	//Unique ptr
//	{
//		std::unique_ptr<Entity> entity(new Entity());//unsafe if constructor throws exception
//		std::unique_ptr<Entity> entity2 = std::make_unique<Entity>();
//
//		//auto entity3 = entity; CAN'T, assign and copy constructor deleted
//	}
//
//	//Shared ptr (reference count)
//	{
//		std::shared_ptr<Entity> shared = std::make_shared<Entity>();
//		{
//			auto shared2 = shared;
//			auto shared3 = std::make_shared<Entity>();
//		}
//	}
//
//	//Weak pointer (does not add to the reference count)
//	{
//		std::weak_ptr<Entity> weak;
//		{
//			std::shared_ptr<Entity> shared = std::make_shared<Entity>();
//			weak = shared;
//		}
//		//invalid reference in the weak pointer
//	}
//}




