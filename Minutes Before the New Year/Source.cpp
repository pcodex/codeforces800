#include <iostream>

using namespace std;

int main()
{
	int notests = 0;
	cin >> notests;

	for (int i = 0; i < notests; i++)
	{
		int hh = 0, mm = 0;
		cin >> hh >> mm;

		int hrsleft = 24 - hh;
		int minsleft = (hrsleft * 60) - mm;

		cout << minsleft << endl;		

	}

	return 0;
}