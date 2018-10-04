// Function perameters

#include <iostream>
using namespace std;

int sayHi(int a, int b){ // Integer variables take arguments
	cout << "Hello!" << endl;
	cout << a+b << endl;
	return a+b;
}

void sayHello(){
	cout << "Hi!" << endl;
} 

int main()
{
	sayHi(1, 2); // Call sayHi function

	return 0;
}
