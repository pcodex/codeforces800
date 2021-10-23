#include <iostream>

using namespace std;

int main()
{
	int k = 0, n = 0, w = 0;

	cin >> k >> n >> w;
	int cost = 0;
	for (int i = 1; i <= w; ++i)
	{
		cost += i * k;
	}

	cout << ((cost > n) ? (cost - n) : 0) << "\n";

	return 0;
}