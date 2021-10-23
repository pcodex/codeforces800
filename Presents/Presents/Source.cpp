#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	vector<int> myv(n+1);

	for (int i = 0; i < n; ++i)
	{
		int val = 0;
		cin >> val;
		myv[val] = i + 1;
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << myv[i] << " ";
	}

	return 0;
}