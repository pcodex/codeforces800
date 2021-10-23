#include <iostream>

using namespace std;

int main()
{
	int noOfStops = 0;
	cin >> noOfStops;

	int currMax = 0;
	int currCap = 0;
	for (int i = 0; i < noOfStops; ++i)
	{
		int a=0, b = 0;
		cin >> a >> b;

		currCap -= a;
		currCap += b;

		if (currCap > currMax)
			currMax = currCap;
	}

	cout << currMax << "\n";

	return 0;
}

/*
10
0 5
1 7
10 8
5 3
0 5
3 3
8 8
0 6
10 1
9 0
*/