//Some optimizations

#include<iostream>
#include <vector>

#define LOG(x) std::cout << x << std::endl

struct Vertex {
public:
	int x, y, z;
	Vertex(int x, int y, int z)
		: x(x), y(y), z(z)
	{

	}

	Vertex(const Vertex& other) 
		: x(other.x), y(other.y), z(other.z)
	{
		LOG("Copied!");
	}
};

//int main() {
//
//	//No performance
//	std::vector<Vertex> vertices;
//
//	LOG("Push back 1");
//	vertices.push_back(Vertex(1, 2, 3));
//	LOG("Push back 2");
//	vertices.push_back(Vertex(1, 2, 3));
//	LOG("Push back 3");
//	vertices.push_back(Vertex(1, 2, 3));
//
//
//	LOG("\n\nPerform\n\n");
//	//performant
//	std::vector<Vertex> vertices2;
//	vertices2.reserve(3);
//
//	LOG("Push performant 1");
//	vertices2.emplace_back(1, 2, 3);
//	LOG("Push performant 2");
//	vertices2.emplace_back(1, 2, 3);
//	LOG("Push performant 3");
//	vertices2.emplace_back(1, 2, 3);
//
//	std::cin.get();
//}