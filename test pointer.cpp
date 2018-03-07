#include <iostream>
using namespace std;

int main(){
	int a = 69;
	int *b = &a;
	int **c = &b;
	cout << "&a = " << &a << "\n";
	cout << "b = " << b << "\n";
	cout << "&b = " << &b << "\n";
	cout << "&c = " << &c << "\n";
	cout << "*c = " << *c << "\n";
	cout << "**c = " << **c << "\n";
	cout << "c = " << c << "\n";
	return 0;
}

/*
&a = 0x70fe3c
b = 0x70fe3c
&b = 0x70fe30
&c = 0x70fe28
*c = 0x70fe3c
**c = 69
c = 0x70fe30
*/
