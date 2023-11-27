#ifndef HEAPSORT
#define HEAPSORT
#include <vector>
class Heapsort{
private:
	std::vector<int>unsorted_vector;
	std::vector<int>sorted_vector;
	int check_child(int unsigned i) const;
	bool check_heap() const;
	std::vector<int> fix_heap();

public:
	std::vector<int> hsort_vector(std::vector<int> _unsorted_vector);

};





#endif
