#include <string>
#include <iostream>
#include <set>

using namespace std;

int main()
{
	string inp;

	cin >> inp;

	set<char> nameChars;
	for (int i = 0; i < inp.length(); ++i) {
		nameChars.insert(inp[i]);
	}

	cout << ((nameChars.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";

	return 0;
}