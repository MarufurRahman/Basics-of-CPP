// Global and local variables in c++

#include <iostream>

using namespace std;

int addition; // Global variable

int main()
{
	int num1, num2; // Local variables

	num1 = 1, num2 = 2;
	addition = num1 + num2;

	cout << addition;

	return 0;
}
