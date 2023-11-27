#include <iostream>
#include <vector>
#include <cassert>
#include "heapsort.h"
#include "insertionsort.h"
#include "quicksort.h"

int main(){

	std::vector<int>someNumbers = { 34, 43, 7, 8, 1, 97, 198, 2 };
	std::vector<int>arangedNumbers = { 1,2,7,8,34,43,97,198 };
	Heapsort sort;
	someNumbers = sort.hsort_vector(someNumbers);
	std::vector<int>somenumbers_T = {10,80,30,90,40,50,70};
	std::vector<int>arangednumbers_T = {10,30,40,50,70,80,90};
	std::vector<int>somenumbers_S = {10,80,30,90,40,50,70};
	std::vector<int>arangednumbers_S = {10,30,40,50,70,80,90};
	insertionsort sort_T;
	Quicksort sort_S;
	sort_S.get_vector(somenumbers_S);
	somenumbers_S = sort_S.init_qsort();
	somenumbers_T=sort_T.init_isort(somenumbers_T);
	//Test Case 1; ARE THESE VECTORS EQUAL AFTER SORTING
	assert(someNumbers == arangedNumbers);
	//Test Case 2;
	assert(somenumbers_T == arangednumbers_T);
	//Test Case 3

	assert(somenumbers_S == arangednumbers_S);

	return 0;
}
