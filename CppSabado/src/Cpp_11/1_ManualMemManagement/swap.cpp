#include <iostream>
#include <thread>



#define LOG(x) std::cout << x << std::endl

void Wait() {
	using namespace std::literals::chrono_literals;
	std::this_thread::sleep_for(1s);
}

class Entity {
public:
	Entity()
	{	}

	~Entity()
	{
		LOG("Destroy");
	}

	Entity(const Entity& other) {
		LOG("Copy constructor, costly");
		Wait();
	}

	Entity& operator=(const Entity& other) {
		LOG("Assignment constructor, costly");
		Wait();

		return *this;
	}

	Entity(const Entity&& temp) {
		LOG("Move operator");
	}

	Entity& operator=(const Entity&& temp) {
		LOG("Move assignment operator");
		return *this;
	}
};

int main() {
	//without the cast, copy constructors are called
	Entity a;
	Entity b;

	Entity temp = (Entity&&) a;
	a = (Entity&&) b;
	b = (Entity&&) temp;
}