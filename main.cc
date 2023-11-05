#include <iostream>
#include <vector>
#include <cassert>
#include "heapsort.h"

int main(){

	std::vector<int>someNumbers = { 34, 43, 7, 8, 1, 97, 198, 2 };
	std::vector<int>arangedNumbers = { 1, 2, 7, 8, 34, 43, 97, 198 };
	Heapsort sort;
	sort.hget_vector(someNumbers);
	someNumbers = sort.fix_heap();


	//Test Case 1; ARE THESE VECTORS EQUAL AFTER SORTING
	//Try=0
	for(int i=0;i<someNumbers.size();i++){
		std::cout << someNumbers[i] << std::endl;
	}
	assert(someNumbers == arangedNumbers);

	return 0;
}
