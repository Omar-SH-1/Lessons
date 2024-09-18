#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main(){
	std::string phrase;
	std::getline(std::cin,phrase);
	if(phrase.starts_with("Hello"))
	{
		std::cout<<"Hi\n";
	}
	if(phrase.ends_with("bye")){
		std::cout<<"Adieu.x\n";
	}
	return 0;
	
	
	
}
