#include <iostream>
#include <vector>
#include <string>
std::string Corcatenate(const std::vector<std::string>&parts){
	std::string result;
	for(const auto& part:parts){
		result+=part;
	}
	return result;
}
void Swap(int& x, int& y){
	int z=x;
	x=y;
	y=z;
}
int main(){
	std:: vector<std::string> parts={"ab","ra","ca","da","bra"};
	std::cout<<Corcatenate(parts)<<"\n";
}

