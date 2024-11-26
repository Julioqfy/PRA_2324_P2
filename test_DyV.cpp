#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>

int main(){
	vector<int> a{3,2,1,4};
	auto start = std::chrono::system_clock::now();
	QuickSort(a,0,3);
	std::chrono::duration<float, std::milli> duration = end - start;
	std::cout << “Normal Time: “ << duration.count() << “s” << std::endl;
	auto start = std::chrono::system_clock::now();
	QuickSortRandom(a,0,3);
	std::chrono::duration<float, std::milli> duration = end - start;
	std::cout << “Random Time: “ << duration.count() << “s” << std::endl;
	auto start = std::chrono::system_clock::now();
	QuickSort(a,0,3);
	std::chrono::duration<float, std::milli> duration = end - start;
	std::cout << “Middle Time: “ << duration.count() << “s” << std::endl;
	cout<<BusquedaBinaria(3, a, 0, 3);
	return 0;
}
