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
	for(int i = Heapsort::unsorted_vector.size();i>=0;i--)
	{

		if(std::find( Heapsort::unsorted_vector.begin(), Heapsort::unsorted_vector.end(),Heapsort::unsorted_vector[2 * i + 2] )!= Heapsort::unsorted_vector.end())
		{
			int parent = Heapsort::unsorted_vector[i];
			int childO = Heapsort::unsorted_vector[2 * i + 1];
			int childT = Heapsort::unsorted_vector[2 * i + 2];
			if(!Heapsort::check_heap(parent, Heapsort::unsorted_vector[2 * i + 1], Heapsort::unsorted_vector[2 * i + 2]))
			{
				if(childO > childT)
				{
					if(parent <= Heapsort::unsorted_vector[2 * i + 1])
					{
						std::swap(Heapsort::unsorted_vector[i],Heapsort::unsorted_vector[2 * i + 1]);
					}

				}
				if(childT > childO)
				{
					if(parent <= childT)
					{
						std::swap(Heapsort::unsorted_vector[i],Heapsort::unsorted_vector[2 * i + 2]);
					}

				}

			}

		}
		else
		{
			//Child Doesn't Exist or Only One Exists

		}

	}
	return Heapsort::unsorted_vector;

}
