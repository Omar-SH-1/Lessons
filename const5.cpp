#include <iostream>
#include <vector>
int main(){
	int x=42;
	const int cx=13;
	int* ptr=&x;
	//ptr=&cx; error
	const int* cptr=&x;
	cptr = &cx;
	int* const ptrc=&x;
	//ptrc = nullptr; error
	++*ptrc;
	const int* const cptrc=&x;
}
