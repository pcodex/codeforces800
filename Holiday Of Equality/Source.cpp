#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int nocit = 0;
	cin >> nocit;
	vector<int> vals;
	//populate vector
	for (int i = 0; i < nocit; ++i)
	{
		int val = 0;
		cin >> val;

		vals.push_back(val);
		
	}

	sort(vals.begin(), vals.end());
	int max = vals[vals.size() - 1];

	int cost = 0;
	for (int j = 0; j < vals.size(); ++j)
	{
		cost += max - vals[j];
	}

	cout << cost << endl;

	return 0;
}
