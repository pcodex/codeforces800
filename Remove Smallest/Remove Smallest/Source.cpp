#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n = 0;
		cin >> n;
		vector<int> v;
		for (int j = 0; j < n; ++j)
		{
			int val = 0;
			cin >> val;
			v.push_back(val);
		}
		sort(v.begin(), v.end());
		bool poss = true;
		for (int z = 0; z < v.size()-1; ++z)
		{
			if (abs(v[z]-v[z+1]) > 1) {
				poss = false;
				break;
			}
		}

		if (poss == false)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	
	return 0;
}