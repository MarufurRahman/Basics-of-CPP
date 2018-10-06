// Playing with loop

#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter a small number for starting loop: ";
	cin >> num1;
	cout << "Enter a big number for ending loop: ";
	cin >> num2;

	while(num1 <= num2){
		cout << num1 << endl;
		num1++;
	}

	return 0;
}
