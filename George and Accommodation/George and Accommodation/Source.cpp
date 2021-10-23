#include <iostream>

using namespace std;

int main()
{
	int nor = 0;
	cin >> nor;

	int count = 0;
	for (int i = 0; i < nor; ++i)
	{
		int p=0, q=0;
		cin >> p >> q;

		if (q - p >= 2)
			count++;
	}

	cout << count << endl;

	return 0;
}