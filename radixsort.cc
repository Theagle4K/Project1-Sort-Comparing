#include "radixsort.h"
#include <iostream>
#include <vector>

void Radixsort::get_vector(std::vector<int> _unsorted_vector){
	Radixsort::unsorted_vector = _unsorted_vector;
}
std::vector<int> Radixsort::countsort(int digit){
	std::vector<int> countarr = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	std::vector<int> sorted_digits;
	for(int unsigned i = 0;i < Radixsort::unsorted_vector.size();i++) countarr[(Radixsort::unsorted_vector[i]/digit ) % 10]++;

	for(int i = 1; i < 11;i++) countarr[i] = countarr[i-1];

	for(int i = 10; i >= 0; i--){
		int pos=countarr[Radixsort::unsorted_vector[i]];
		sorted_digits[pos] = Radixsort::unsorted_vector[i];
		countarr[Radixsort::unsorted_vector[i]]--;
	}
	return Radixsort::sorted_vector;
}
