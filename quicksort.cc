#include <iostream>
#include "quicksort.h"
#include <vector>
#include <ctime>
#include <cstdlib>

//Get function, basically putting a vector in class and preparing to get divided
void Quicksort::get_vector(std::vector<int> _unsorted_vector){
	Quicksort::unsorted_vector = _unsorted_vector;
	Quicksort::vector_o_vector.insert(Quicksort::vector_o_vector.end(),Quicksort::unsorted_vector); //It becomes the first vector to go through division
}
int Quicksort::randomNumber(std::vector<int> _unsorted_vector){
		srand(time(NULL));
		int randomN = rand() % _unsorted_vector.size();
		return randomN;
		//Getting a random value as pivot for each time
}
std::vector<std::vector<int>> Quicksort::divide_vector(std::vector<int> _unsorted_vector){
	int pivot = _unsorted_vector[Quicksort::randomNumber(_unsorted_vector)];
	std::vector<int> smaller_vector;
	std::vector<int> bigger_vector;
	std::vector<int> pivot_vector;
	for(int unsigned i=0; i < _unsorted_vector.size();i++){ //Checks if the given value is smaller or bigger than pivot
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
	Quicksort::vector_o_vector.erase(Quicksort::vector_o_vector.begin());//Erase the already divided from the list
	if(!bigger_vector.empty())
		vector_o_vector.insert(vector_o_vector.begin(),bigger_vector);
	if(!pivot_vector.empty())
		vector_o_vector.insert(vector_o_vector.begin(),pivot_vector);
	if(!smaller_vector.empty())
		vector_o_vector.insert(vector_o_vector.begin(),smaller_vector);
	return vector_o_vector; // Put the vectors obtained from the process and add them to the list according to their placement regarding pivot
}
std::vector<int> Quicksort::init_qsort(){ // Start up the quicksort and keep dividing each vector until every vector is divided
	std::vector<int> _sorted_vector;
	while(Quicksort::vector_o_vector.size()> 0){
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

