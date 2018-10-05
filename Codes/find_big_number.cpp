// Find bigger number from two integer
// Programmed by Marufur Rahman

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter your First number: ";
	cin >> num1;

	cout << "Enter your second number: ";
	cin >> num2;

	cout << "Big number is: " << fmax(num1, num2) << endl;

	return 0;
}
