#ifndef INSERTIONSORT_H
#define INSERSIONSORT_H
#include <vector>

class insertionsort {
private:
	std::vector<int> unsorted_array;
	std::vector<int> sorted_array;

public:
	void get_vector(std::vector<int> _unsorted_vector);
	std::vector<int> i_sort();

};

#endif
