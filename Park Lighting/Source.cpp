#include <iostream>

using namespace std;

int main()
{
	int nooftests = 0;

	int m=0, n = 0;

	cin >> nooftests;

	for (int i = 0; i < nooftests; ++i)
	{
		cin >> n >> m;

		cout << ((n * m) / 2) + ((n * m) % 2) << endl;
	}

	return 0;
}