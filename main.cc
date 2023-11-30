#include <iostream>
#include <vector>
#include <cassert>
#include <chrono>
#include "heapsort.h"
#include "insertionsort.h"
#include "quicksort.h"
#include "radixsort.h"
#include "Hybridsort.h"
#include <bits/stdc++.h>
#include <iterator>

void time_map(int i){
	int const const_i = i;
	while(i<const_i*10){
		long time_heap = 0;
		long time_insertion = 0;
		long time_quick = 0;
		long time_radix = 0;
		long time_hybrid = 0;
		long time_sorted_heap = 0;
		long time_sorted_insertion = 0;
		long time_sorted_quick = 0;
		long time_sorted_radix = 0;
		long time_sorted_hybrid = 0;


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
    	std::vector<int> sorted_vec(const_i);
    	for(int j;j<const_i*10;j++){
    		vec[j] = j;
    	}
    	generate(begin(vec), end(vec), gen);
    	time_heap += sort.timelapsingh(vec);
    	time_insertion += sort_T.timelapsingi(vec);
    	time_quick += sort_S.timelapsingq(vec);
    	time_radix += sort_R.timelapsingr(vec,0);
    	time_hybrid += timelapsinghy(vec,sort_S);
    	time_sorted_heap += sort.timelapsingh(sorted_vec);
    	time_sorted_insertion += sort_T.timelapsingi(sorted_vec);
    	time_sorted_quick += sort_S.timelapsingq(sorted_vec);
    	time_sorted_radix += sort_R.timelapsingr(sorted_vec,0);
    	time_sorted_radix += timelapsinghy(sorted_vec,sort_S);

    	std::cout << i << " "<< time_heap << " " <<
                  time_insertion << " " <<
				  time_quick << " " <<
				  time_radix << " " <<
				  time_hybrid << " " <<
				  time_sorted_heap << " " <<
				  time_sorted_insertion << " " <<
				  time_sorted_quick << " " <<
				  time_sorted_quick << " " <<
				  time_sorted_radix << " " <<
				  time_sorted_hybrid << " " << std::endl;
    	vec.empty();
    	i+=const_i;
	}
}


int main(){
		std::cout << " Size " << " Heapsort " << " Insertion "  << " Quick "  << " Radix " << " Hybrid "
		<< " Heapsort Sorted " << " Insertion Sorted "  << " Quick Sorted "  << " Radix Sorted " << " Hybrid Sorted " << std::endl;
		time_map(1);
		time_map(10);
		time_map(100);
		time_map(1000);





	return 0;
}
