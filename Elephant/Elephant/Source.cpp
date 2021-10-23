#include <iostream>

using namespace std;


int main()
{
	int val = 0;
	cin >> val;

	if (val > 0 && val <= 5)
		cout << 1 << endl;
	else if(val%5==0)
	{
		cout << (val / 5)  << endl;
	}
	else
	{
		cout << (val / 5) + 1 << endl;
	}

	return 0;
}