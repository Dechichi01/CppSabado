/*
	. Chars can be useful for arithmatic because they have 1 byte (ex> Allocate 1024 chars to allocate 1024 bytes of memory)
	. Remember the \0 terminator (example with char[5] without 0 terminator)

*/

/*
	. String literals are stored in a READ ONLY portion of memory. The below code is UNDEFINED BEHAVIOUR
		char a[6] = "12345";
		a[2] = "7";
*/

//int main() {
//	const char* a = (char*) "12345";
//	// a[2] = '9'; -> This is undefined behaviour (exception in debug, no effect in release)
//
//	// This workds
//	char b[] = "1234";
//	b[2] = '9';
//
//	const wchar_t* c = L"Cherno";
//	const char16_t* d = u"Cherno";
//	const char32_t* e = U"Cherno";
//
//
//	const char* multiline = R"(Line 1
//								Line 3)";//This adds a '\n' in the line already
//}