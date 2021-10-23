#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int games;
	cin >> games;
	
	string inp;
	cin >> inp;

	//faster soln 31ms
	int acnt = count(inp.begin(), inp.end(), 'A');

	if (acnt > games / 2)
		cout << "Anton\n";
	else if ((acnt == games / 2) && (games%2 == 0))
		cout << "Friendship\n";
	else
		cout << "Danik\n";

	
	//slower 46ms
	/*int acnt = 0, dcnt = 0;
	
	for (int i = 0; i < inp.length(); ++i)
	{
		if (inp[i] == 'A')
			acnt++;
		else
			dcnt++;
	}

	if (acnt > dcnt)
		cout << "Anton\n";
	else if (dcnt > acnt)
		cout << "Danik\n";
	else
		cout << "Friendship\n";
	*/


	return 0;

}