#include <iostream>
#include <string>
#include <cctype>
#include <set>

using namespace std;

int main()
{
	int no = 0;
	cin >> no;

	if (no < 26) {
		cout << "NO" << endl;
		return 0;
	}

	string inp;
	cin >> inp;

	set<char> sctr;

	for (int i = 0; i < inp.length(); ++i)
	{
		char ct = tolower(inp[i]);
		sctr.insert(ct);
	}

	if (sctr.size() == 26)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;

}