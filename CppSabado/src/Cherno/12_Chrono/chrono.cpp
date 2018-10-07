#include <chrono>
#include <thread>
#include<iostream>

struct Timer 
{
	std::chrono::time_point<std::chrono::steady_clock> start;
	std::chrono::duration<float> duration;

	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer() {
		duration = std::chrono::high_resolution_clock::now() - start;
	}
};
//int main() {
//	using namespace std::literals::chrono_literals;
//
//	auto start = std::chrono::high_resolution_clock::now();
//
//	std::this_thread::sleep_for(1s);
//	auto end = std::chrono::high_resolution_clock::now();
//
//	auto duration = end - start;
//
//	std::cout << duration.count() << std::endl;
//
//	std::cin.get();
//}