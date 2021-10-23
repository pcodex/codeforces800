#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int nooftests = 0;

	cin >> nooftests;

	for (int i = 0; i < nooftests; ++i)
	{
		int idx = 0;
		cin >> idx;
		int hlf = idx / 2;

		int bag1 = pow(2, idx);
		int bag2 = bag1 - 2;
		for (int j = 1; j < hlf; ++j)
		{
			int tmp = pow(2, j);
			bag1 += tmp;
			bag2 -= tmp;
		}

		cout << abs(bag1 - bag2)<<endl;
	}

	return 0;
}