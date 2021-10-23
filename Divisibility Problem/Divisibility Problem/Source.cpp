#include <iostream>

using namespace std;

int main()
{
	int nt = 0;
	cin >> nt;

	for (int i = 0; i < nt; ++i)
	{
		int num = 0, div = 0;
		cin >> num >> div;

		if (num % div != 0)
			cout << div - (num % div) << endl;
		else
			cout << num % div << endl;
	}

	return 0;
}