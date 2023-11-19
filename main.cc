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
	std::vector<int>somenumbers_T = {3,3,2,4,5,2,4,1,1,7,3};
	std::vector<int>arangednumbers_T = { 1,1,2,2,3,3,3,4,4,5,7 };
	insertionsort sort_T;
	somenumbers_T=sort_T.init_isort(somenumbers_T);
	//Test Case 1; ARE THESE VECTORS EQUAL AFTER SORTING
	assert(someNumbers == arangedNumbers);
	//Test Case 2;
	assert(somenumbers_T == arangednumbers_T);

	return 0;
}
