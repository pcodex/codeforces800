#include <iostream>

using namespace std;

int main()
{
	int melonWt = 0;
	cin >> melonWt;

	if (((melonWt - 2) > 0) && ((melonWt - 2) % 2 == 0))
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}