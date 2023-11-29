#include "radixsort.h"
#include <iostream>
#include <vector>
#include <cmath>

void Radixsort::get_vector(std::vector<int> _unsorted_vector){
	Radixsort::unsorted_vector = _unsorted_vector;
}
int Radixsort::get_radius(int rad /*= 0*/){
	if(rad == 0){
		for(int unsigned i = 0;i < Radixsort::unsorted_vector.size();i++)
			if(rad < Radixsort::unsorted_vector[i]) rad = Radixsort::unsorted_vector[i];
	}
	return int (std::log10(rad) + 1);
}

std::vector<int> Radixsort::countsort(int digit){
	std::vector<int> countar(10,0);

	for(size_t i = 0;i < Radixsort::unsorted_vector.size();i++){
		countar[(Radixsort::unsorted_vector[i]/digit ) % 10]++;
	}
	for(int i = 1; i < 10; i++){
		countar[i] += countar[i - 1];
	}
	std::vector<int> sorted_digits;
	sorted_digits.resize(Radixsort::unsorted_vector.size());
	for(int i = Radixsort::unsorted_vector.size() - 1; i >= 0; i--){
		int posc = (Radixsort::unsorted_vector[i]/digit) % 10;
		int pos=--countar[posc];
		sorted_digits[pos] = posc;
	}
	return sorted_digits;
}

std::vector<int> Radixsort::init_rsort(std::vector<int> _unsorted_vector,int _rad /*= 0*/){
	Radixsort::get_vector(_unsorted_vector);
	int rad=Radixsort::get_radius(_rad);
	Radixsort::sorted_vector.resize(Radixsort::unsorted_vector.size(),0);

	for(int base = 1 ;std::log10(base)<rad;base*=10){
		std::vector<int> digits = Radixsort::countsort(base);
		for(size_t j = 0; j < Radixsort::unsorted_vector.size();j++){
			Radixsort::sorted_vector[j] += digits[j]*base;
		}
	}
	return Radixsort::sorted_vector;
}
