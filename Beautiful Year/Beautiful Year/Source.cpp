#include <string>
#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main()
{
	int yr;
	cin >> yr;
	bool found = false;

	int nxt = yr;
	for (int i = 1; i <= 9000; ++i)
	{		
		nxt = yr+i;
		stringstream ss;
		ss << nxt;
		string strnxt = ss.str();

		set<char> aset;
		for (int j = 0; j < strnxt.length(); ++j)
		{
			aset.insert(strnxt[j]);
		}
		if (aset.size() == strnxt.length()) {
			cout << strnxt << endl;
			break;
		}		
	}

	return 0;
}