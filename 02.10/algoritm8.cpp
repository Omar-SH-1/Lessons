#include <algorithm>
#include <deque>
#include <iterator>
#include <list>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> in1 = {1, 3, 5, 5, 7};
    std::list<int> in2 = {1, 1, 2, 3};
    std::deque<int> out;

    std::merge(
        in1.begin(), in1.end(),
        in2.begin(), in2.end(),
        std::back_inserter(out)
    );  
    for (auto x:out){
		std::cout<<x<< " ";
	}
	std::cout<<"\n";
    out.clear();
    std::set_union(
        in1.begin(), in1.end(),
        in2.begin(), in2.end(),
        std::back_inserter(out)
    );
        for (auto x:out){
		std::cout<<x<< " ";
	}
	std::cout<<"\n";
    out.clear();
    std::set_intersection(
        in1.begin(), in1.end(),
        in2.begin(), in2.end(),
        std::back_inserter(out)
    ); 
        for (auto x:out){
		std::cout<<x<< " ";
	}
	std::cout<<"\n";
    out.clear();
    std::set_difference(
        in1.begin(), in1.end(),
        in2.begin(), in2.end(),
        std::back_inserter(out)
    ); 
        for (auto x:out){
		std::cout<<x<< " ";
	}
	std::cout<<"\n";
    out.clear();
    std::set_symmetric_difference(
        in1.begin(), in1.end(),
        in2.begin(), in2.end(),
        std::back_inserter(out)
    );  
        for (auto x:out){
		std::cout<<x<< " ";
	}


}
