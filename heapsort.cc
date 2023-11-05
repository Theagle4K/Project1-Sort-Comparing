#include <iostream>
#include <vector>
#include <algorithm>
#include "heapsort.h"

void Heapsort::hget_vector(std::vector<int> _unsorted_vector){

	Heapsort::unsorted_vector = _unsorted_vector;

}

bool Heapsort::check_heap(int parent, int childO, int childT){

	if(parent >= childO && parent >= childT){
		return true;
	}
	else{
		return false;
	}

}

std::vector<int> Heapsort::fix_heap(){

	std::vector<int> empty  = {};
	for(int i = Heapsort::unsorted_vector.size();i>0;i--)
	{

		int parent = Heapsort::unsorted_vector[i];
		if(std::find( Heapsort::unsorted_vector.begin(), Heapsort::unsorted_vector.end(),Heapsort::unsorted_vector[2 * i + 1] )!= Heapsort::unsorted_vector.end())
		{
			//Apply if child exist
			return empty;
		}
		else
		{
			//Child Doesn't exist
			return empty;
		}

	}
	return empty;

}
