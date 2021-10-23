#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int notests = 0;
	cin >> notests;

	for (int i = 0; i < notests; ++i)
	{
		int len = 0;
		cin >> len;
		vector<int> vals;
		for (int j = 0; j < len; ++j)
		{
			int val = 0;
			cin >> val;
			vals.push_back(val);
		}

		bool isgood = true;
		int noofmoves = 0;
		for (int z = 0; z < vals.size(); ++z)
		{
			int swpidx = z + 1;
			bool good = true;
			while ((z % 2) != (vals[z] % 2))
			{
				if (swpidx > vals.size() - 1)
				{
					good = false;
					break;
				}

				int tmp = vals[swpidx];
				if (tmp % 2 != swpidx % 2)
				{
					vals[swpidx] = vals[z];
					vals[z] = tmp;
					good = true;
					noofmoves++;
				}
				else {
					swpidx+=2;
					if (swpidx > vals.size() - 1)
						good = false;
				}
			}
			if (!good)
			{
				isgood = false;
				break;
			}
		}
		if (isgood)
			cout << noofmoves << endl;
		else
			cout << -1<<endl;
	}

	return 0;
}