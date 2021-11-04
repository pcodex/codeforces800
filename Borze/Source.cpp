#include <string>
#include <vector>
#include <iostream>

using namespace std;


int main()
{
	string inp;
	cin >> inp;

	string op;
	for (int i = 0; i < inp.length(); ++i)
	{
		if (inp[i] == '.')
			op += '0';
		else if (inp[i] == '-' && inp[i + 1] == '.') {
			op += '1';
			i++;
		}
		else if (inp[i] == '-' && inp[i + 1] == '-') {
			op += '2';
			i++;
		}
	}

	cout << op << endl;

	return 0;
}