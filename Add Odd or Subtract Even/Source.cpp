#include <iostream>
using namespace std;

int main()
{
	int notests = 0;

	cin >> notests;

	for (int i = 0; i < notests; ++i)
	{
		int a = 0, b = 0;
		cin >> a >> b;

		if (b > a)
		{
			if (((b - a) % 2) != 0)			
				cout << 1 << endl;			
			else			
				cout << 2 << endl;			
		}
		else if (b < a)
		{
			if (((a - b) % 2) == 0)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
		else
			cout << 0 << endl;
	}

	return 0;
}