#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		long long a = 0, b = 0;
		cin >> a >> b;

		bool done = false;
		int adder = 10;
		long long step = 0;
		cout << "Outputs\n";
		if (a < b) {
			while (!done)
			{
				a = a + adder;
				if (a < b) {
					step += 1;
					continue;
				}
				else if (a > b) {
					a = a - adder;
					adder -= 1;
				}
				else {
					step += 1;
					done = true;
				}
			}
			cout << step << endl;
		}
		else if (a > b)
		{
			while (!done)
			{
				a = a - adder;
				if (a > b) {
					step += 1;
					continue;
				}
				else if (a < b) {
					a = a + adder;
					adder -= 1;
				}
				else {
					step += 1;
					done = true;
				}
			}
			cout << step << endl;

		}
		else
		{
			cout << 0 << endl;
		}
		
	}

	
	
	return 0;
	
}