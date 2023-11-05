#include <iostream>
#include <vector>
#include <algorithm>
#include "heapsort.h"

/*
 * This function takes a vector value and initiates fix_heap
 * Works as the main function
 */
std::vector<int> Heapsort::hsort_vector(std::vector<int> _unsorted_vector){
	Heapsort::unsorted_vector = _unsorted_vector;
	return Heapsort::fix_heap();
}
/*
 * Checks out weather or not the value has children or a child
 * Takes a number between vector.end() and vector.begin()
 * Returns a number according to the case
 */
int Heapsort::check_child(int i){
	//If a parent have a second child,then it certainly have first child
	if(std::find( Heapsort::unsorted_vector.begin(), Heapsort::unsorted_vector.end(),Heapsort::unsorted_vector[2 * i + 2] )!= Heapsort::unsorted_vector.end())
			return 1;
	//If second child is not there it still checks out for the first one and returns a different case
		else if(std::find( Heapsort::unsorted_vector.begin(), Heapsort::unsorted_vector.end(),Heapsort::unsorted_vector[2 * i + 1] )!= Heapsort::unsorted_vector.end())
			return 2;
	//And if first child also doesn't exist, returns last case
		else
			return 3;
}
/*
 * Checks out whether or not triple of parent and children make up a heap
 * Takes no argument
 * Returns True for heap and False for not heap
 * */
bool Heapsort::check_heap(){
	for(int i = Heapsort::unsorted_vector.size();i>=0;i--)
	{
		if(Heapsort::check_child(i)==1)
		{
			//Extra variables to make it look cleaner
			int parent=Heapsort::unsorted_vector[i];
			int childO=Heapsort::unsorted_vector[2 * i + 1];
			int childT=Heapsort::unsorted_vector[2 * i + 2];
			if(parent < childO || parent < childT) //If any of the children is bigger, immediately returns false
				return false;
		}
		if(Heapsort::check_child(i)==2)
		{
			int parent=Heapsort::unsorted_vector[i];
			int childO=Heapsort::unsorted_vector[2 * i + 1];
			if(parent < childO) //Only one, so if it is bigger, immediately returns false
				return false;
		}
	}
	return true;
}
/*Fixes any heap triples which are not corrected
 * Takes no argument, will return the corrected array
 * */
std::vector<int> Heapsort::fix_heap(){
	while(!Heapsort::check_heap()){
		// Checks it out multiple times until every heap triple is fixed
		for(int i = Heapsort::unsorted_vector.size();i>=0;i--)
		{
			if(Heapsort::check_child(i) == 1)
			{
				int parent = Heapsort::unsorted_vector[i];
				int childO = Heapsort::unsorted_vector[2 * i + 1];
				int childT = Heapsort::unsorted_vector[2 * i + 2];

				if(childO > childT && parent < childO)
					//Makes sure you are only switching once for each triple
					//Only switches with the parent if it's the biggest, not if it's just bigger than parent
					std::swap(Heapsort::unsorted_vector[i],Heapsort::unsorted_vector[2 * i + 1]);
				if(childT > childO && parent < childT)
					std::swap(Heapsort::unsorted_vector[i],Heapsort::unsorted_vector[2 * i + 2]);
				//Also for the swaps, using the variables don't work so I had to use original value
			}
			if(Heapsort::check_child(i)==2)
			{
				//Same as above but only if one child exists
				int parent = Heapsort::unsorted_vector[i];
				int childO = Heapsort::unsorted_vector[2 * i + 1];
				if(parent <= childO)
					std::swap(Heapsort::unsorted_vector[i],Heapsort::unsorted_vector[2 * i + 1]);

			}
		}
	}

	return Heapsort::unsorted_vector;

}
