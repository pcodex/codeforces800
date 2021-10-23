#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	long long num;
	cin >> num;

	stringstream ss;
	ss << num;
	string strnum = ss.str();
	int cnt = 0;

	for (int i = 0; i < strnum.length(); ++i)
	{
		if (strnum[i] == '7' || strnum[i] == '4')
			cnt++;
	}

	if (cnt == 7 || cnt == 4)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;

}

//4744000695826