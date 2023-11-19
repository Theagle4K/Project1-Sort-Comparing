#include <iostream>
#include <vector>
#include "insertionsort.h"
#include <algorithm>

void insertionsort::get_vector(std::vector<int> _unsorted_vector){
	insertionsort::unsorted_array = _unsorted_vector;

}
std::vector<int> insertionsort::i_sort(){
	for(int l = 0; unsigned(l + 1) <  insertionsort::unsorted_array.size();l++){
		int r = l + 1;
		const int _l = l;
		const int _r = r;

		while(insertionsort::unsorted_array[l] > insertionsort::unsorted_array[r] && l >= 0 ){
				std::swap(insertionsort::unsorted_array[l],insertionsort::unsorted_array[r]);
				l--;
				r--;
		}
		l= _l;
		r= _r;
	}
	return unsorted_array;
}
