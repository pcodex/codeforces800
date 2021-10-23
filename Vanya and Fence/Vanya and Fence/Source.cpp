#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n = 0, h = 0;
	cin >> n >> h;

	int wd = 0;
	for (int i = 0; i < n; ++i)
	{
		int ht = 0;
		cin >> ht;
		if (ht <= h)
			wd += 1;
		else
			wd += 2;
	}

	cout << wd << endl;

}