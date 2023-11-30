#include <iostream>
#include <cassert>
#include <algorithm>
#include <chrono>
#include "quicksort.h"
#include <vector>
#include "Hybridsort.h"

std::vector<int> Hybridsort(std::vector<int> _unsorted_vector,Quicksort sort){
	if(_unsorted_vector.size() <= 2000){
		_unsorted_vector = init_hisort(_unsorted_vector);
		return _unsorted_vector;
	}else{
		_unsorted_vector = sort.init_qsort(_unsorted_vector);
		return _unsorted_vector;
	}
}


std::vector<int> init_hisort(std::vector<int> unsorted_vector){
	for(int l = 0; unsigned(l + 1) < unsorted_vector.size();l++){
		int r = l + 1;
		const int _l = l;
		const int _r = r;
		while(unsorted_vector[l] > unsorted_vector[r] && l >= 0 ){
				std::swap(unsorted_vector[l],unsorted_vector[r]);
				l--;
				r--;
		}
		l= _l;
		r= _r;
	}
	return unsorted_vector;
}
long timelapsinghy(std::vector<int> _unsorted_vector,Quicksort sort){
	auto start = std::chrono::steady_clock::now();
	_unsorted_vector=Hybridsort(_unsorted_vector, sort);
	auto end = std::chrono::steady_clock::now();
	assert(std::is_sorted(_unsorted_vector.begin(),_unsorted_vector.end()));
	return std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
}
