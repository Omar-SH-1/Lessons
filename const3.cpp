#include <iostream>
#include <vector>
int main(){
	int x= 42;
	int& ref =x;
	const int& cref = x;
	++x //mojno
	++ref; //mojno
	//++cref error
	int* ptr=&x;
	const int* cptr=&x;
	++*ptr;
	//++*cptr; error
}

