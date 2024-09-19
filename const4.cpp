#include <iostream>
#include <vector>
int main(){
	const int cx=42;
	// int& ref=cf; error
	const int& cref=cx;
	// int* ptr=&cx;
	const int*cptr=&cx;
}

