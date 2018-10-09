// C++ switch statement
// Written by Marufur Rahman

#include <iostream>

using namespace std;

int main()
{
	char grade;

	cout << "Enter your grade: ";
	cin >> grade;

	switch (grade) {
		case 'A' :
			cout << "Excellent!" << endl;
			break;
		case 'B' :
			cout << "Well done." << endl;
			break;
		case 'D' :
			cout << "You passed." << endl;
			break;
		default :
			cout << "Invalid grade" << endl;
	}

	return 0;
}
