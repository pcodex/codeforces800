#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int nooftests = 0;
	cin >> nooftests;

	for (int i = 0; i < nooftests; ++i)
	{
		int v1=0, v2=0, v3=0, v4 = 0;
		cin >> v1 >> v2 >> v3 >> v4;
		vector<int> vals{ v1,v2,v3,v4 };
		sort(vals.begin(), vals.end());

		int win1 = (v1 > v2) ? v1 : v2;
		int win2 = (v3 > v4) ? v3 : v4;
		if ((win1 == vals[2] || win1 == vals[3]) &&
			(win2 == vals[2] || win2 == vals[3]))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;	

	}

	return 0;
}