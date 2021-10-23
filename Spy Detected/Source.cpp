#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int notests = 0;
	cin >> notests;

	for (int i = 0; i < notests; ++i)
	{
		int len = 0;		
		cin >> len;		

		int val1 = 0, val2 = 0, val3 = 0;
		int idx = -1;

		for (int j = 0; j < len; ++j)
		{
			int val = 0;
			cin >> val;

			if (j == 0)
				val1 = val;
			if (j == 1)
				val2 = val;			
			if (j == 2)
				val3 = val;

			if (j >= 2) {

				if (val1 == val2 && val1 != val3) {					
					idx = 3;
					break;
				}
				else if (val1 == val3 && val1 != val2) {
					idx = 2;
					break;
				}
				else if (val2 == val3 && val2 != val1) {
					idx = 1;
					break;
				}
				else if (val1 == val2 && val2 == val3) {
					if (val != val1) {
						idx = j + 1;
						break;
					}
				}
			}
		}

		cout << idx << " " << endl;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	return 0;
}