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

	Heapsort sort;
	insertionsort sort_T;
	Quicksort sort_S;
	Radixsort sort_R;
	for(int i; i<=10000; i*=2){
		long time_heap;
		long time_insertion;
		long time_quick;
		long time_radix;
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

	}





	return 0;
}
