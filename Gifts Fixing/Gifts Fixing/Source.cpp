#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int tests;
	cin >> tests;

	for (int i = 0; i < tests; ++i)
	{
		int nogifs;
		cin >> nogifs;
		vector<unsigned long long> can;
		vector<unsigned long long> org;

		for (int j = 0; j < nogifs; ++j)
		{
			unsigned long long val=0;
			cin >> val;
			can.push_back(val);
		}

		for (int j = 0; j < nogifs; ++j)
		{
			unsigned long long val = 0;
			cin >> val;
			org.push_back(val);
		}

		unsigned long long canmin = *(min_element(can.begin(), can.end()));
		unsigned long long orgmin = *(min_element(org.begin(), org.end()));

		unsigned long long cnter = 0;
		for (int z = 0; z < nogifs; ++z)
		{
			if (can[z] > canmin && org[z] > orgmin) {
				if (can[z] - canmin > org[z] - orgmin)
					cnter += (can[z] - canmin);
				else
					cnter += (org[z] - orgmin);
			}

			else if (can[z] > canmin) {					
				cnter += can[z]-canmin;
			}

			else if (org[z] > orgmin) {				
				cnter += org[z] - orgmin;
			}
		}

		cout << cnter << endl;

	}
	return 0;
}