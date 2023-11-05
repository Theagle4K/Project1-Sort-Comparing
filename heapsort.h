#ifndef HEAPSORT
#define HEAPSORT
#include <vector>
class Heapsort{
private:
	std::vector<int>unsorted_vector;

public:
	void hget_vector(std::vector<int> _unsorted_vector);
	bool check_heap(int parent, int childO, int childT);
	std::vector<int> fix_heap();
};





#endif
