#include <iostream>
#include <vector>
#include <cassert>

int main(){

	std::vector<int>someNumbers = { 34, 43, 7, 8, 1, 97, 198, 2 };
	std::vector<int>arangedNumbers = { 1, 2, 7, 8, 34, 43, 97, 198 };

	//Test Case 1; ARE THESE VECTORS EQUAL AFTER SORTING
	//Try=0
	assert(someNumbers == arangedNumbers);



	return 0;
}
