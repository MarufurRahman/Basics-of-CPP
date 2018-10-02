#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	a = 10;
	b = 11;
	c = 13;

	if(a>b){
		cout << "10 is bigger than 11.";
	} else if(b>c){
		cout << "11 is bigger than 13.";
	} else if(c==b){
		cout << "13 is bigger than 11.";
	} else{
		cout << "Nothing happend.";
	}

	return 0;
}
