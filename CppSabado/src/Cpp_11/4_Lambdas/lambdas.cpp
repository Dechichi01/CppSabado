#include <functional>

/*
	. std function:
		. More clear type for lambdas
		. Allows typing lambdas that capture outside arguments
	. Another fun
*/

void SomeNetworkOperation(const char* route, int(*callback)(const char* resp)) {
	//Do something
	const char* response = "success";
	if (callback) {
		callback(response);
	}
}

void SomeNetworkOperation(const char* route, std::function<int(const char*)> callback) {
	//Do something
	const char* response = "success";
	if (callback) {
		callback(response);
	}
}

//int main() {
//	int(*lambda)(const char* resp) = [](const char* resp) -> int {
//		return 0;
//	};
//
//	std::function<int(const char*)> otherLambda = [](const char* resp) -> int {
//		return 0;
//	};
//
//	auto thirdLambda = [](const char* resp) -> int {
//		return 0;
//	};
//
//	int x = 2;
//	auto finalLambda = [x](const char* resp) mutable -> int {
//		x++;
//		return x;
//	};
//
//	SomeNetworkOperation("some_route", lambda);//Calls first function
//	SomeNetworkOperation("some_route", otherLambda);// calls second
//	//SomeNetworkOperation("some_route", thirdLambda); Don't know which one to call
//	SomeNetworkOperation("some_route", finalLambda);
//}