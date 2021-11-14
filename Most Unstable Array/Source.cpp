#include <iostream>
using namespace std;


int main()
{
	int notests = 0, n=0, m = 0;
	cin >> notests;

	for (int i = 0; i < notests; ++i)
	{
		cin >> n >> m;
		if (n == 1)
			cout << 0 << endl;
		else if (n == 2)
			cout << m << endl;
		else
			cout << 2 * m << endl;
	}

	return 0;
}