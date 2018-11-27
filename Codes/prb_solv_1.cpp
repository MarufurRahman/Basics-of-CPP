/*
Output:
8 7 6 5 
8 7 6 
8 7 
8 
*/

#include <iostream>

using namespace std;

int main()
{
	for(int i=5; i<=8; i++)
	{
		for(int j=8; j>=i; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}