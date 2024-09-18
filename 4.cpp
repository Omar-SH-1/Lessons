#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
enum class Color{White,Red,Blue,Green};
int main(){
	Color color1=Color::Red;
	Color color2=Color::Green;
	int value = static_cast<int>(color2);
	std::cout<<value<<" ";
	Color color3=static_cast<Color>(2);
	
	
}
