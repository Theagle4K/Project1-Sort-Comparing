#ifndef HEAPSORT
#define HEAPSORT
#include <vector>
class Heapsort{
private:
	std::vector<int>unsorted_vector;

public:
	std::vector<int> hsort_vector(std::vector<int> _unsorted_vector);
	int check_child(int i);
	bool check_heap();
	std::vector<int> fix_heap();
};





#endif
