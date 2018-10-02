// Hello for you!

#include <iostream>

using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name); // Input name

	cout << "Hello " << name << "." << endl; // Print hello massage to you
    return 0;
}
