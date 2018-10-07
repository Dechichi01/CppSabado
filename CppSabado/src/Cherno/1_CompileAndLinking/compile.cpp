/*
	. Preprocess (#include)
	. Tokeninzing, parsing -> Abstract syntax stream (compiler can understand)
	. Abstract syntax -> Machine code (constant date or instructions)
	. File have no meaning
	. Each cpp file -> translation unit
	. Constant folding -> Anything that can be worked out in compile time is
	. FUnction signature (obvious)
*/

#define INTEGER int

const char* Log(const char* msg) {
	return msg;
}

int Multiply(int a, int b) {
	return a * b;
	//return result;
}


int Multiply2() {
	Log("test");
	return 5 * 2;
}