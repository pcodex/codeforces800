#include <iostream>
#include <string>
#include <sstream>


using namespace std;


int main()
{
	string a, b;

	cin >> a >> b;

	string out(a.length(),' ');

	for (int i = 0; i < a.length(); ++i) {
		if (a[i] != b[i])
			out[i] = '1';
		else
			out[i] = '0';
	}

	cout << out << endl;
	return 0;

}