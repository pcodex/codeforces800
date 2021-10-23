#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n = 0, m = 0;

	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
		{
			string s(m, '#');
			cout << s << endl;
		}
		else
		{
			if (cnt % 2 == 0) {
				string s(m-1, '.');
				s += '#';
				cout << s << endl;
			}
			else
			{
				string s(1,'#');
				string s2(m-1, '.');
				cout << s+s2 << endl;
			}
			cnt++;
		}
	}

	return 0;

}