#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	string h = "I hate";
	string l = "I love";

	string op;

	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
			op += h;
		else
			op += l;

		if (n > 1 && i<n-1)
			op += " that ";
	}
	
	op += " it";

	cout << op << endl;
	return 0;
}