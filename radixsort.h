#ifndef RADIXSORT_H
#define RADIXSORT_H
#include <vector>

class Radixsort{
private:
	std::vector<int> sorted_vector;
	std::vector<int> unsorted_vector;
	int max_radius;


public:

	void get_vector(std::vector<int> _unsorted_vector);
	int get_radius();
	std::vector<int> countsort(int digit);


};



#endif


