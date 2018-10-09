#include <iostream>

using namespace std;

int main()
{
	int a = 123123;
	float b = 1.123456;
	double c = 1.12345678;
	string d = "Maruf";
	char e = 'M';
	bool f = true;

	cout << "Size of integer a: " << sizeof(a) << " bytes." << endl;
	cout << "Size of float b: " << sizeof(b) << " bytes." << endl;
	cout << "Size of double c: " << sizeof(c) << " bytes." << endl;
	cout << "Size of string d: " << sizeof(d) << " bytes." << endl;
	cout << "Size of char e: " << sizeof(e) << " bytes." << endl;
	cout << "Size of bool f: " << sizeof(f) << " bytes.";

	return 0;
}
