/*
	. Lambdas are allowed to live outside the declaration scope, buy it's captured variables may not
	. It's up to the programmer to assure captured variables live long enough
*/

#include <functional>

int main() {
	std::function<int()> f;
	{
		int i = 4;
		f = [&i] { return i; };
	}

	f();//Undefined behaviour

	{
		int* i = new int;
		f = [&i] {return *i; };
		delete i;
	}

	f();//Undefined behaviour again
}