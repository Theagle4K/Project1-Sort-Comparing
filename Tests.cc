#include <iostream>
#include <vector>
#include <cassert>
#include "heapsort.h"
#include "insertionsort.h"
#include "quicksort.h"
#include "radixsort.h"
#include <bits/stdc++.h>

/*int main(){
	std::vector<int>someNumbers = {137, 94, 20, 25, 45, 35, 176, 172, 89, 51, 181, 170, 119, 132, 37, 169, 149, 199, 99, 174, 78, 60, 106, 12, 175, 148, 43, 6, 14, 191, 48, 143, 72, 23, 138, 140, 151, 18, 183, 190, 97, 188, 133, 22, 81, 82, 126, 65, 108, 67, 52, 160, 146, 86, 16, 196, 125, 122, 38, 114, 173, 69, 71, 154, 131, 2, 120, 49, 178, 107, 144, 76, 165, 156, 142, 166, 91, 26, 129, 159, 185, 197, 5, 141, 46, 3, 103, 24, 116, 128, 55, 68, 83, 57, 189, 117, 40, 56 };
	std::vector<int>someNumbers2 = {137, 94, 20, 25, 45, 35, 176, 172, 89, 51, 181, 170, 119, 132, 37, 169, 149, 199, 99, 174, 78, 60, 106, 12, 175, 148, 43, 6, 14, 191, 48, 143, 72, 23, 138, 140, 151, 18, 183, 190, 97, 188, 133, 22, 81, 82, 126, 65, 108, 67, 52, 160, 146, 86, 16, 196, 125, 122, 38, 114, 173, 69, 71, 154, 131, 2, 120, 49, 178, 107, 144, 76, 165, 156, 142, 166, 91, 26, 129, 159, 185, 197, 5, 141, 46, 3, 103, 24, 116, 128, 55, 68, 83, 57, 189, 117, 40, 56 };
	Heapsort sort;
	someNumbers = sort.hsort_vector(someNumbers);
	std::sort(someNumbers2.begin(),someNumbers2.end());
	std::vector<int>somenumbers_T = {10,80,30,90,40,50,70};
	std::vector<int>arangednumbers_T = {10,30,40,50,70,80,90};
	std::vector<int>somenumbers_S = {10,80,30,90,40,50,70};
	std::vector<int>arangednumbers_S = {10,30,40,50,70,80,90};
	std::vector<int>somenumbers_R = {10,80,30,90,40,50,70};
	std::vector<int>arangednumbers_R = {10,30,40,50,70,80,90};
	insertionsort sort_T;
	Quicksort sort_S;
	Radixsort sort_R;
	somenumbers_R = sort_R.init_rsort(somenumbers_R,0);
	somenumbers_S = sort_S.init_qsort(somenumbers_S);
	somenumbers_T = sort_T.init_isort(somenumbers_T);
	//Test Case 1; ARE THESE VECTORS EQUAL AFTER SORTING
	assert(someNumbers == someNumbers2);
	//Test Case 2;
	assert(somenumbers_T == arangednumbers_T);
	//Test Case 3
	assert(somenumbers_S == arangednumbers_S);
	//Test Case $
	assert(somenumbers_R == arangednumbers_R);

	return 0;
}*/
