#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int notests = 0;
	cin >> notests;

	for (int i = 0; i < notests; ++i)
	{
		int kth = 0;
		cin >> kth;

		vector<int> ss;
		int num = 1;
		while (ss.size() < kth)
		{
			if ((num % 3 != 0) && (num % 10 != 3)) {
				ss.push_back(num);
			}
			num++;
		}

		cout << ss[ss.size() - 1] << endl;

	}

	return 0;
}