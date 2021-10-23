#include <string>
#include <cctype>
#include <iostream>
using namespace std;


int main()
{

	string inp;
	cin >> inp;

	int lowcnt = 0, upcnt = 0;

	for (int i = 0; i < inp.length(); ++i)
	{
		if (isupper(inp[i]) == true)
			upcnt++;
		else
			lowcnt++;
	}

	for (int i = 0; i < inp.length(); ++i) {	
		
		if (upcnt > lowcnt)
		{
			inp[i] = toupper(inp[i]);
		}
		else 
		{
			inp[i] = tolower(inp[i]);
		}		
	}

	cout << inp << endl;
	return 0;

}