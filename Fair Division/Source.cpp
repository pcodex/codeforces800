#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int notests = 0;
	cin >> notests;

	for (int i = 0; i < notests; ++i)
	{
		int nofcan = 0;
		cin >> nofcan;
		
		int totwt = 0;
		int onescnt = 0;
		int twoscnt = 0;
				
		for (int j = 0; j < nofcan; ++j) {
			int canwt = 0;
			cin >> canwt;
			totwt += canwt;
			if (canwt == 1)
				onescnt++;
			else
				twoscnt++;
		}

		if (totwt % 2 == 0) {

			if (((onescnt == 0) && (twoscnt % 2 == 0)) ||
				((onescnt % 2 == 0) && (twoscnt == 0)) ||
				((twoscnt % 2 != 0) && (onescnt % 2 == 0) && (onescnt > 0)) ||
				(onescnt>0 && onescnt%2 == 0 && twoscnt>0 && twoscnt%2 == 0)
				)

				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}