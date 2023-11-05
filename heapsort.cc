#include <iostream>
#include <vector>
#include <algorithm>
#include "heapsort.h"

std::vector<int> Heapsort::hsort_vector(std::vector<int> _unsorted_vector){
	Heapsort::unsorted_vector = _unsorted_vector;
	return Heapsort::fix_heap();
}
int Heapsort::check_child(int i){
	if(std::find( Heapsort::unsorted_vector.begin(), Heapsort::unsorted_vector.end(),Heapsort::unsorted_vector[2 * i + 2] )!= Heapsort::unsorted_vector.end())
			return 1;
		else if(std::find( Heapsort::unsorted_vector.begin(), Heapsort::unsorted_vector.end(),Heapsort::unsorted_vector[2 * i + 1] )!= Heapsort::unsorted_vector.end())
			return 2;
		else
			return 3;
}

bool Heapsort::check_heap(){
	for(int i = Heapsort::unsorted_vector.size();i>=0;i--)
	{
		if(Heapsort::check_child(i)==1)
		{
			int parent=Heapsort::unsorted_vector[i];
			int childO=Heapsort::unsorted_vector[2 * i + 1];
			int childT=Heapsort::unsorted_vector[2 * i + 2];
			if(parent < childO || parent < childT)
				return false;
		}
		if(Heapsort::check_child(i)==2)
		{
			int parent=Heapsort::unsorted_vector[i];
			int childO=Heapsort::unsorted_vector[2 * i + 1];
			if(parent < childO)
				return false;
		}
	}
	return true;
}

std::vector<int> Heapsort::fix_heap(){
	while(!Heapsort::check_heap()){
		for(int i = Heapsort::unsorted_vector.size();i>=0;i--)
		{
			if(Heapsort::check_child(i) == 1)
			{
				int parent = Heapsort::unsorted_vector[i];
				int childO = Heapsort::unsorted_vector[2 * i + 1];
				int childT = Heapsort::unsorted_vector[2 * i + 2];

				if(childO > childT && parent < childO)
					std::swap(Heapsort::unsorted_vector[i],Heapsort::unsorted_vector[2 * i + 1]);
				if(childT > childO && parent < childT)
					std::swap(Heapsort::unsorted_vector[i],Heapsort::unsorted_vector[2 * i + 2]);
			}
			if(Heapsort::check_child(i)==2)
			{
				int parent = Heapsort::unsorted_vector[i];
				int childO = Heapsort::unsorted_vector[2 * i + 1];
				if(parent <= childO)
					std::swap(Heapsort::unsorted_vector[i],Heapsort::unsorted_vector[2 * i + 1]);

			}
		}
	}

	return Heapsort::unsorted_vector;

}
