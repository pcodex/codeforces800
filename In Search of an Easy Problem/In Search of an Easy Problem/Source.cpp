#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	bool hard = false;

	for (int i = 0; i < n; ++i)
	{
		int op = -1;
		cin >> op;
		if (op == 1) {
			hard = true;
			break;
		}
	}

	if (hard)
		cout << "Hard\n";
	else
		cout << "Easy\n";

	return 0;
}