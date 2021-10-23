#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	string host;
	string gu;

	string inp;
	cin >> host;
	cin >> gu;
	cin >> inp;

	for (int i = 0; i < host.length(); ++i)
	{
		if (inp.length() > 0) {
			size_t pos = inp.find(host[i]);
			if (pos != std::string::npos)
				inp.erase(pos,1);
			else {
				cout << "NO\n";
				return 0;
			}
		}
		else
		{
			cout << "NO\n";
			return 0;
		}
		
	}

	for (int i = 0; i < gu.length(); ++i)
	{
		if (inp.length() > 0) {

			size_t pos = inp.find(gu[i]);
			if (pos != std::string::npos)
				inp.erase(pos,1);
			else {
				cout << "NO\n";
				return 0;
			}
		}
		else {
			cout << "NO\n";
			return 0;
		}
	}

	if (inp.length() == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}