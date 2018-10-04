// Hello for you!

#include <iostream>
using namespace std;

int main()
{
    string name;

	cout << "Enter your name: ";
	getline(cin, name); // Input name

	cout << "Hello " << name << "." << endl; // Printing a hello massage
	
    return 0;
}
