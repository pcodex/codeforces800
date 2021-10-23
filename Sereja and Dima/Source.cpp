#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>


using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	vector<int> nos;
	for (int i = 0; i < n; ++i)
	{
		int anum = 0;
		cin >> anum;
		nos.push_back(anum);
	}

	int ser = 0, dim = 0;
	
	while (nos.size() > 0)
	{
		if (nos[0] > nos[nos.size() - 1])
		{
			ser += nos[0];
			nos.erase(nos.begin());
		}
		else {
			ser += nos[nos.size() - 1];
			nos.erase(nos.end() - 1);
		}

		if (nos.size() > 0) {
			if (nos[0] > nos[nos.size() - 1])
			{
				dim += nos[0];
				nos.erase(nos.begin());
			}
			else {
				dim += nos[nos.size() - 1];
				nos.erase(nos.end() - 1);
			}
		}
	}

	cout << ser << " " << dim << endl;
	return 0;
}