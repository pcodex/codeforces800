#include <vector>
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int tests = 0;
	cin >> tests;

	for (int i = 0; i < tests; ++i)
	{
		int num = 0;
		cin >> num;

		vector<int> digs;
		int cnt = 1;
		while (num > 0)
		{
			int val = num % (int)(pow(10,cnt));
			if(val!=0)
				digs.push_back(val);
			num = num - val;
			cnt++;
		}

		cout << digs.size() << endl;
		for (int z = 0; z < digs.size(); ++z)
			cout << digs[z] << " ";
		cout << endl;
	}



	return 0;
}