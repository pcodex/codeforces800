#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int noTests = 0;

	cin >> noTests;

	
	for (int i = 0; i < noTests; ++i)
	{
		string b;
		cin >> b;

		//abac -> abbaac
		//abc -> abbc

		string ans = b.substr(0,2);
		for (int j = 3; j < b.length(); j+=2)
		{
			ans += b[j];
		}
		//ans += b[b.length() - 1];

		cout << ans << endl;
	}
	
	return 0;
}