// Vowel or consonant
// Code written by Marufur Rahman

#include <iostream>
using namespace std;

class Ch {
	char c;
public:
	void display(void);
};
void Ch::display(void) {
	cin >> c;
	if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u') {
		cout << "The character is vowel.";
	} else {
		cout << "The character is consonent.";
	}
}

int main()
{
	Ch p;
	p.display();
	return 0;
}
