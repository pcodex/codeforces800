#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	string inp;
	cin >> inp;

	for (int i = 0; i < b; ++i)
	{
		int idx = 0;
		while (idx < (a - 1))
		{
			if (inp[idx] == 'B' && inp[idx + 1] == 'G') {
				inp[idx] = 'G';
				inp[idx + 1] = 'B'; 
				idx += 2;
			}
			else
			{
				idx++;
			}
		}
	}
	cout << inp << endl;

	return 0;
}