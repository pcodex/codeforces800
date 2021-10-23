#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	string inp;
	cin >> inp;
	string inp2;
	cin >> inp2;

	string rev = inp;
	reverse(rev.begin(), rev.end());

	if (rev == inp2)
		cout << "YES\n";
	else
		cout << "NO\n";

	return  0;

}