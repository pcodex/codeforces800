#include <iostream>
using namespace std;


int main()
{
	int nooftests = 0;
	cin >> nooftests;

	for (int i = 0; i < nooftests; ++i)
	{
		unsigned long long x = 0, y = 0, n = 0;
		cin >> x >> y >> n;

		int k = n;

		if (n % x == y)
			cout << n << endl;		
		else
		{			
			int rem = k % x;
			if (rem < y) {
				k = (k - rem);
				k = k - (x - y);
			}
			else
			{
				int dff = rem - y;
				k = k - dff;
			}
			cout << k << endl;
		}		
	}

	return 0;
}