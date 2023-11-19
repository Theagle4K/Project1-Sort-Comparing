#include <iostream>
#include <vector>
#include "insertionsort.h"
#include <algorithm>

void insertionsort::get_vector(std::vector<int> _unsorted_vector){
	insertionsort::unsorted_array = _unsorted_vector;

}
std::vector<int> insertionsort::i_sort(){
	for(int l = 0; unsigned(l) <  insertionsort::unsorted_array.size();l++){
		int r = l + 1;
		while(insertionsort::unsorted_array[l] > insertionsort::unsorted_array[r] && insertionsort::unsorted_array[l] >= 0 ){
				std::swap(insertionsort::unsorted_array[l],insertionsort::unsorted_array[r]);
				l--;
				r--;
		}
	}
	return sorted_array;
}
