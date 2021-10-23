#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	vector<int> inp;

	cin >> a >> b >> c;
	inp.push_back(a);
	inp.push_back(b);
	inp.push_back(c);

	sort(inp.begin(), inp.end());

	cout << (inp[1] - inp[0]) + (inp[2] - inp[1]);

	return 0;


}