#ifndef RADIXSORT_H
#define RADIXSORT_H
#include <vector>

class Radixsort{
private:
	std::vector<int> sorted_vector;
	std::vector<int> unsorted_vector;
	void get_vector(std::vector<int> _unsorted_vector);
	int get_radius(int rad /*= 0*/);
	void countsort(int digit);


public:


	std::vector<int> init_rsort(std::vector<int> _unsorted_vector,int _rad /*= 0*/);
	long timelapsingr(std::vector<int> _unsorted_array,int _rad);

};



#endif


