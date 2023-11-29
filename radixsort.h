#ifndef RADIXSORT_H
#define RADIXSORT_H
#include <vector>

class Radixsort{
private:
	std::vector<int> sorted_vector;
	std::vector<int> unsorted_vector;


public:

	void get_vector(std::vector<int> _unsorted_vector);
	int get_radius(int rad /*= 0*/);
	std::vector<int> countsort(int digit);
	std::vector<int> init_rsort(std::vector<int> _unsorted_vector,int _rad /*= 0*/);

};



#endif


