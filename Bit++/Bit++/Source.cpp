#include <iostream>
#include <string>

using namespace std;

int main()
{
	int noOfStats = 0;
	cin >> noOfStats;
	int val = 0;

	for (int i = 0; i < noOfStats; ++i)
	{
		string inp;
		cin >> inp;
		if (inp.find("+") != std::string::npos)
			val++;
		else
			val--;
	}
	cout << val << "\n";
	return 0;
}