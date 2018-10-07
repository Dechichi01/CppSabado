/*
	. A union define a single variable that can be referenced in different ways
	. Is used for type punning
*/

#include <iostream>

#define LOG_VEC2(v) std::cout << v.x << ", " << v.y << std::endl

struct Vector2 {
	float x, y;
};

struct Vector4 {
	union
	{
		struct {
			float x, y, z, w;
		};
		struct {
			Vector2 a, b;
		};
	};
};

int main() {

	struct Float3
	{
		union { int x, r; };
		union { int y, g; };
		union { int z, b; };
	};

	Vector4 v4{ 1,2, 3, 4 };

	LOG_VEC2(v4.b);
	v4.z = 50;
	LOG_VEC2(v4.b);  
}