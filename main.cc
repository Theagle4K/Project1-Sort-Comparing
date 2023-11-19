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
	std::vector<int>somenumbers_T = { 12, 11, 13, 5, 6 };
	std::vector<int>arangednumbers_T = { 5, 6, 11, 12, 13 };
	insertionsort sort_T;
	sort_T.get_vector(somenumbers_T);
	somenumbers_T=sort_T.i_sort();
	//Test Case 1; ARE THESE VECTORS EQUAL AFTER SORTING
	assert(someNumbers == arangedNumbers);
	//Test Case 2;
	assert(somenumbers_T == arangednumbers_T);

	return 0;
}
