/*
	. Override keyword makes clear the function is being overwritten
	. final keyword prevents inheritance or override
*/

class Base {
public:
	virtual void f() = 0;
	virtual void m(int t) {

	};

	virtual void noOverride() final {

	};
};

class Derived final : public Base{
	virtual void m(int t) override {

	}

	/*virtual void m(float f) override { // override keyword generates compile error

	}*/

	//virtual void noOverride() override { // cannot override final function

	//}
};

//class Derived2 : public Derived {// cannot inherit from final class
//
//};

//int main() {
//	//Base b();//pure virtual class
//}
