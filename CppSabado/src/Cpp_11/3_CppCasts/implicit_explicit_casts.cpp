/*
	Implicit conversion in classes:
		. Like the copy/copy assign constructor but receives the differnt tyhpe
*/

class RationalNumber {
	friend class NaturalNumber;

private:
	float f;

public:
	RationalNumber(const float& n) {
		f = n;
	}
};

class NaturalNumber {
private:
	unsigned int n;
public:
	NaturalNumber(const int& other) {
		n = other;
	}

	NaturalNumber& operator=(const int& other) {
		n = other;
		return *this;
	}

	explicit NaturalNumber(const RationalNumber& other) {
		n = other.f;
	}
};


//int main() {
//	//------- Standard convertions
//	int a = -2;
//	float b = a;//Promotion
//	unsigned int c = a;//Different value
//
//	float d = 2.3;
//	int e = d;//slicing
//
//	//------- implicit class conversion
//	int n = 4;
//	NaturalNumber number = n;//copy constructor must exist
//	RationalNumber f = 2.5f;
//	NaturalNumber number2 = (NaturalNumber) f;//explicit
//	// Number number2 = "444";
//}