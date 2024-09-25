#include <iostream>
#include <list>
int main(){
	std::list<int> l{0,10,20,30};
	auto iter=std::next(l.begin());
	std::advance(iter,2);
	std::cout<<*iter<<" ";
}
