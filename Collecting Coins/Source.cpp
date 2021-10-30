#include <iostream>
using namespace std;

int main()
{
	int notests = 0;
	cin >> notests;

	for (int i = 0; i < notests; ++i)
	{
		int a = 0, b = 0, c = 0, n = 0;
		//get inputs
		cin >> a >> b >> c >> n;

		if (
			((a + b + c + n) - (a + b + c) == 1) &&
			(((a + b + c + n) % 3) == 0)&&
			(a==b)||()
			)
		{
			cout << "YES\n";
		}
		if (((a + b + c + n) % 3) == 0)
			cout << "YES" << endl;
		else
			cout << "NO\n";
	}

	return 0;
}
