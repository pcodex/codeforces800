#include <iostream>
using namespace std;

int main()
{
	int nofigs = 0;
	cin >> nofigs;

	for (int i = 0; i < nofigs; ++i)
	{
		int sides = 0;
		cin >> sides;

		if (sides % 4 == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
		
	}

	return 0;
}