#include <iostream>
using namespace std;


int main()
{
	int notests= 0;

	cin >> notests;

	for (int i = 0; i < notests; ++i)
	{
		int val = 0;
		cin >> val;

		cout << val - ((val / 2) + 1) << endl;
	}

	return 0;
}