#include <iostream>
using namespace std;


int main()
{
	int n = 0;
	cin >> n;

	int grp = 0;
	string prev = "";
	for (int i = 0; i < n; ++i)
	{
		string mg = "";
		cin >> mg;
		if (mg != prev)
			grp++;

		prev = mg;
	}

	cout << grp << endl;

	return 0;
}