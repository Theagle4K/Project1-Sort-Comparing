#ifndef INSERTIONSORT_H
#define INSERSIONSORT_H
#include <vector>

class insertionsort {
private:
	std::vector<int> unsorted_array;
	std::vector<int> sorted_array;
	void get_vector(std::vector<int> _unsorted_array);
	std::vector<int> i_sort();

public:

	std::vector<int> init_isort(std::vector<int> _unsorted_array);

};

#endif
