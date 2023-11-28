#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>

class Quicksort{
private:
	std::vector<int> unsorted_vector;
	std::vector<int> sorted_vector;
	std::vector<std::vector<int>> vector_o_vector;
	void get_vector(std::vector<int> _unsorted_array);
	int randomNumber(std::vector<int> _unsorted_array);
	std::vector<std::vector<int>> divide_vector(std::vector<int> _unsorted_array);

public:


	std::vector<int> init_qsort(std::vector<int> _unsorted_vector);

};




#endif
