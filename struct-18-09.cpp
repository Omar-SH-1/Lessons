#include <iostream>
enum class Color{
	White,
	Red,
	Blue,
	Orange,
	
	};
struct Point{
	double x=0.0;
	double y=0.0;
	double z=0.0;
	Color color;
	};
int main(){
	Point point1;
	point1.color=Color::Blue;
	Point point2={1.4,-2.2,-3.98, Color::Red};
	point2.z=32;
	point2.x+=2;
	int a= sizeof(point1);
	std::cout<<a<<" ";
	int b= sizeof(double);
	std::cout<<b<<" ";
	int c= sizeof(Color);
	std::cout<<c<<" ";
}
