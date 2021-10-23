#include <string>
#include <iostream>
#include <cctype>
using namespace std;


int main()
{
	string inp;
	cin >> inp;

	char c = toupper(inp[0]);
	inp[0] = c;

	cout << inp << "\n";

	return 0;
}