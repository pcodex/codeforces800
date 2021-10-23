#include <iostream>
#include <set>
using namespace std;


int main()
{
	int k = 0, l = 0, m = 0, n = 0, d = 0;

	cin >> k >> l >> m >> n >> d;

	set<int> ss;

	for (int i = k; i <= d; i += k)
	{
		ss.insert(i);
	}

	for (int i = l; i <= d; i += l)
	{
		ss.insert(i);
	}

	for (int i = m; i <= d; i += m)
	{
		ss.insert(i);
	}

	for (int i = n; i <= d; i += n)
	{
		ss.insert(i);
	}

	cout << ss.size() << endl;

	return 0;
}