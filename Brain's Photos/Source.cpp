#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n = 0, m = 0;
	cin >> n >> m;

	bool iscol = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char col;
			cin >> col;
			if (col == 'C' ||
				col == 'M' ||
				col == 'Y')
			{
				iscol = true;
				break;
			}
		}

		if (iscol == true)
			break;
	}

	if(iscol)
		cout << "#Color" << endl;
	else
		cout << "#Black&White" << endl;

	return 0;
}