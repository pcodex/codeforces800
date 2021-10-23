#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0, k = 0;
	cin >> n >> k;

	int noTeams = 0;
	int expectedVal = 5 - k;

	int y = 0;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> y;		
		if (y <= expectedVal && cnt<3)
		{
			cnt++;
			if (cnt == 3) {
				noTeams += 1;
				cnt = 0;
			}
		}
	}

	cout << noTeams << endl;

	return 0;
}