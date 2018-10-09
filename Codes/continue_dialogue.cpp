// Continue dialogue
// Programmed by Marufur Rahman

#include <iostream>

using namespace std;

int main()
{
	char decision;

	cout << "Press Y to continue or any key to cancel: ";
	cin >> decision;

	if (decision == 'Y') {
		cout << "Continue..";
	} else {
		cout << "Canceled!";
	}

	return 0;
}
