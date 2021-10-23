#include <iostream>

using namespace std;

int main()
{
	int noOfTest = 0;

	cin >> noOfTest;

	for (int i = 0; i < noOfTest; ++i)
	{
		int inp = 0;
		cin >> inp;

		if (inp % 2 == 0)
			cout << inp/2 << endl;
		else 
			cout << (inp / 2)+1 << endl;			

	}

	return 0;
}