#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int nooftests = 0;
	// get input
	cin >> nooftests;

	for (int i = 0; i < nooftests; ++i)
	{
		int n = 0, x = 0;

		cin >> n >> x;

		int flrno = 1;
		int aptmin = 1;
		int aptmax = 2;
		while (n > aptmax)
		{
			flrno += 1;
			aptmin = aptmax + 1; //((flrno-2)*x) + 3;
			aptmax = aptmin + x - 1;

			if (n >= aptmin && n <= aptmax)
				break;
		}
		cout << flrno << endl;
	}

	return 0;

}
