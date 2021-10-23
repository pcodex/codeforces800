#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> hms, gus;

	int teams = 0;
	cin >> teams;

	for (int i = 0; i < teams; ++i)
	{
		int hm = 0;
		cin >> hm;
		hms.push_back(hm);

		int gu = 0;
		cin >> gu;
		gus.push_back(gu);
	}

	int sum = 0;
	for (int i = 0; i < gus.size(); ++i)
	{
		sum += count(hms.begin(), hms.end(), gus[i]);
	}

	cout << sum << endl;

	return 0;

}