/*
	. A derived class inherits every method from the base class except from:
		. Constructor, destructor and copy constructors
		. Overload operators
		. Friend functions

	. Member modifiers just like C#
	
	. Types of inheritance:
		. Public: most common. Public and protected members/functions in the base class become public/protected members in the derived class
		. Protected: public/protected members/functions in the base class become all protected in the derived class
		. Private: public/protected members/functions in the base class become all private in the derived class
*/

class Base
{
public:
	int a;
	void FuncA() {};
protected:
	int b;
	void FuncB() {};
};

class DerivedBaseProtected : protected Base {

};

class DerivedDerivedProtected : public DerivedBaseProtected {
public:
	void FuncC() {
		FuncA();
		FuncB();
	}
};

class DerivedBasePrivate : private Base {
};

class DerivedDerivedPrivate : public DerivedBasePrivate {
public:
	void FuncC() {
		//FuncA(); Can't do this
	}
};