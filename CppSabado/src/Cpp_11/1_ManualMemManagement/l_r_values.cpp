/*
	. rvalues are generally "const" temporary values, that can only appear in the right side of an expression
		. int i = f(); (f is an rvalue)
		. char c = 'c'; ('c' is an rvalue)

	. lvalues are any value that can be assigned to

	. Move semantics where created to differentiate rvalues and lvalues. A T&& where created to store a rvalue that could be modifiable

*/

void f(int& n) {

}

void f(const int&& n) {

}

//int main()
//{
//	int i = 2;//l value
//	f(i);
//	f(8);//8 is a rvalue
//
//	const int j = 3;//const l value
//	//f(j); CAN'T
//}