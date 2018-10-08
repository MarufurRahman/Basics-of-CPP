// Pointer
// Written by Marufur Rahman

#include <iostream>

using namespace std;

int main()
{
	int number = 1;
	int *pNumber = &number; // Storing number memory address to a pointer variable

	cout << pNumber << endl; // Show pointer variable value
	cout << &number << endl; // Show a variable memory address

	return 0;
}
