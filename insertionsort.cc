#include <iostream>
#include <vector>
#include "insertionsort.h"
#include <algorithm>
#include <chrono>
#include <cassert>

//Gets the vector to use it, fairly simple.
void insertionsort::get_vector(std::vector<int> _unsorted_array){
	//The vector it gets is marked as unsorted
	insertionsort::unsorted_array = _unsorted_array;

}
//The main algorithm works fairly simple as well
std::vector<int> insertionsort::i_sort(){
	//Start with a loop and make sure we go through every element
	//Marked by l being for left and r for right
	for(int l = 0; unsigned(l + 1) <  insertionsort::unsorted_array.size();l++){
		int r = l + 1;
		//To keep following what values we were at if the iterators get modified
		const int _l = l;
		const int _r = r;
		//Checks if the left value is larger than right value
		//As long as there is a left value and that left value is bigger than right value
		while(insertionsort::unsorted_array[l] > insertionsort::unsorted_array[r] && l >= 0 ){
				//If the left value is bigger than right, switch the values
				std::swap(insertionsort::unsorted_array[l],insertionsort::unsorted_array[r]);
				//If we switch the values, go back and check for the previous left value and right value
				//Which should have the one we switched with and one previously checked
				l--;
				r--;
		}
		//As we are done, and make sure all the values on the left side of the iterators are sorted
		//Go back to original location to continue checking the rest of the elements
		l= _l;
		r= _r;
	}
	return unsorted_array;
}
//Initialize everything and collect them in one function
std::vector<int> insertionsort::init_isort(std::vector<int> _unsorted_array){
	insertionsort::get_vector(_unsorted_array);
	insertionsort::sorted_array = insertionsort::i_sort();
	return insertionsort::sorted_array;
}
long insertionsort::timelapsingi(std::vector<int> _unsorted_vector){
	auto start = std::chrono::steady_clock::now();
	insertionsort::init_isort(_unsorted_vector);
	auto end = std::chrono::steady_clock::now();
	assert(std::is_sorted(insertionsort::unsorted_array.begin(),insertionsort::unsorted_array.end()));
	return std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
}
