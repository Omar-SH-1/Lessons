#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main(){
	std:: string s="Some string functions";
	s.insert(5,"std::");
	std::cout<<s<<"\n";
	s.replace(0,4,"Special");
	std::cout<<s<<"\n";
	s.erase(8,5);
	std::cout<<s<<"\n";
}
