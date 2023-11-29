#include <iostream>
#include <vector>
#include <cassert>
#include <chrono>
#include "heapsort.h"
#include "insertionsort.h"
#include "quicksort.h"
#include "radixsort.h"
#include <bits/stdc++.h>
#include <iterator>


int main(){

	long time_heap;
	long time_insertion;
	long time_quick;
	long time_radix;
	for(int i=1; i<=10000; i*=2){

		Heapsort sort;
		insertionsort sort_T;
		Quicksort sort_S;
		Radixsort sort_R;
		std::random_device randdev;
		std::mt19937 me_engine{randdev()};
    	std::uniform_int_distribution<int> dist {1, 2*i};
    	auto gen = [&dist, &me_engine](){
                   	   return dist(me_engine);
               	   };

    	std::vector<int> vec(2*i);
    	generate(begin(vec), end(vec), gen);
    	time_heap=sort.timelapsingh(vec);
    	time_insertion=sort_T.timelapsingi(vec);
    	time_quick=sort_S.timelapsingq(vec);
    	time_radix=sort_R.timelapsingr(vec,0);
    	std::cout << time_heap << std::endl;
    	std::cout << time_insertion << std::endl;
    	std::cout << time_quick << std::endl;
    	std::cout << time_radix << std::endl;
    	std::cout << i << " large array\n";
    	vec.empty();
	}






	return 0;
}
