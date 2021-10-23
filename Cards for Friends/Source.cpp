#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int noofts = 0;
	cin >> noofts;

	for (int i = 0; i < noofts; ++i) {

		int w = 0, h = 0, n = 0;
		cin >> w >> h >> n;

		int ct = 1;
		bool yes = false;

		if (n == 1 && ct == 1)
			yes = true;

		while (((w % 2 == 0) || (h % 2 == 0)) && (w > 1 || h > 1))
		{
			if (w % 2 == 0) {
				w = w / 2;
				ct *= 2;
				if (ct >= n)
				{
					yes = true;
					break;
				}
			}
			else if (h % 2 == 0)
			{
				h = h / 2;
				ct *= 2;
				if (ct >= n)
				{
					yes = true;
					break;
				}
			}
		}

		if (yes)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}