#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int nooftests = 0;
	cin >> nooftests;

	for (int i = 0; i < nooftests; ++i)
	{
		int n = 0;
		cin >> n;
		vector<int> vnos;

		for (int k = 0; k < n; ++k)
		{
			if (k == 0 || k == 1)
				vnos.push_back(2*k + 1);
			else if (vnos[k - 1] + vnos[k - 2] + 1 <= 1000)
				vnos.push_back(vnos[k - 1] + vnos[k - 2] + 1);
			else
				vnos.push_back(vnos[k - 1]);
		}
		for (int kl = 0; kl < n; ++kl)
		{
			cout << vnos[kl] << " ";
		}
		cout << endl;
	}

	return 0;
}