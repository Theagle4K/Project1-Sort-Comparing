#include <iostream>
#include <vector>
#include <cassert>
#include "heapsort.h"
#include "insertionsort.h"

int main(){

	std::vector<int>someNumbers = { 34, 43, 7, 8, 1, 97, 198, 2 };
	std::vector<int>arangedNumbers = { 198, 43 , 97, 8 , 1 , 34 , 7 ,2 };
	Heapsort sort;
	someNumbers = sort.hsort_vector(someNumbers);
	//Test Case 1; ARE THESE VECTORS EQUAL AFTER SORTING
	assert(someNumbers == arangedNumbers);


	return 0;
}
