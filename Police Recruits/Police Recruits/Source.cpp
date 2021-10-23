#include <string>
#include <iostream>

using namespace std;

int main()
{

	int eve = 0;
	cin >> eve;

	int cops = 0;
	int crim = 0;

	for (int i = 0; i < eve; ++i)
	{
		int val = 0;
		cin >> val;
		if (val < 0)
		{
			if (cops > 0)
				cops--;
			else
				crim++;
		}
		else if (val > 0)
		{
			cops+=val;
		}
	}

	cout << crim << endl;

	return 0;


}