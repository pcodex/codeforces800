#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int nooftests = 0;
	cin >> nooftests;

	for (int i = 0; i < nooftests; ++i)
	{
		int press = 0;
		// get inputs
		cin >> press;

		int dig = press % 10;
		int ans = (dig - 1) * 10;

		stringstream ssno;
		ssno << press;
		string strpress = ssno.str();

		if (strpress.length() == 1)
			ans += 1;
		else if (strpress.length() == 2)
			ans += 3;
		else if (strpress.length() == 3)
			ans += 6;
		else
			ans += 10;

		cout << ans << endl;
	}

	return 0;
}
