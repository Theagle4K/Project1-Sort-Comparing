#include <iostream>
#include "quicksort.h"
#include <vector>
#include <ctime>
#include <cstdlib>

void Quicksort::get_vector(std::vector<int> _unsorted_vector){
	Quicksort::unsorted_vector = _unsorted_vector;
	Quicksort::vector_o_vector.insert(Quicksort::vector_o_vector.end(),Quicksort::unsorted_vector);
}
int Quicksort::randomNumber(std::vector<int> _unsorted_vector){
	//if(_unsorted_vector.size()>0){
		srand(time(NULL));
		int randomN = rand() % _unsorted_vector.size();
		return randomN;
	//}else {
		//return 0;
	//}
}
std::vector<std::vector<int>> Quicksort::divide_vector(std::vector<int> _unsorted_vector){
	int pivot = _unsorted_vector[Quicksort::randomNumber(_unsorted_vector)];
	std::vector<int> smaller_vector;
	std::vector<int> bigger_vector;
	std::vector<int> pivot_vector;
	std::vector<std::vector<int>> _vector_o_vector;
	for(int unsigned i=0; i < _unsorted_vector.size();i++){
		if(_unsorted_vector[i] < pivot){
		smaller_vector.insert(smaller_vector.end(),_unsorted_vector[i]);
		}
		else
			if(_unsorted_vector[i] > pivot){
				bigger_vector.insert(bigger_vector.end(),_unsorted_vector[i]);

		}else{
			if(_unsorted_vector[i] == pivot)
				pivot_vector.insert(pivot_vector.end(),_unsorted_vector[i]);

		}
	}
	for(int unsigned i = 0;i < Quicksort::vector_o_vector.size();i++){
		if(Quicksort::vector_o_vector[i] == _unsorted_vector){
			Quicksort::vector_o_vector.erase(Quicksort::vector_o_vector.begin());
		}
	}
	if(!bigger_vector.empty())
		vector_o_vector.insert(vector_o_vector.begin(),bigger_vector);
	if(!pivot_vector.empty())
		vector_o_vector.insert(vector_o_vector.begin(),pivot_vector);
	if(!smaller_vector.empty())
		vector_o_vector.insert(vector_o_vector.begin(),smaller_vector);
	return vector_o_vector;
}
std::vector<int> Quicksort::quick_sort(){
	std::vector<int> _sorted_vector;
	for(int unsigned i = 0;Quicksort::vector_o_vector.size()> 0;i++){
		if(Quicksort::vector_o_vector[0].size()> 1)
		Quicksort::divide_vector(Quicksort::vector_o_vector[0]);
		else{
			_sorted_vector.insert(_sorted_vector.end(),Quicksort::vector_o_vector[0][0]);
			Quicksort::vector_o_vector.erase(Quicksort::vector_o_vector.begin());
		}
	}
	Quicksort::sorted_vector = _sorted_vector;
	return Quicksort::sorted_vector;
}

