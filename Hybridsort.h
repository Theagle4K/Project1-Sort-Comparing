#ifndef HYBRIDSORT_H
#define HYBRIDSORT_H
#include <vector>
#include "Quicksort.h"



std::vector<int> Hybridsort(std::vector<int> unsorted_vector,Quicksort sort);
std::vector<int> init_hisort(std::vector<int> unsorted_vector);
long timelapsinghy(std::vector<int> unsorted_vector,Quicksort sort);



#endif




