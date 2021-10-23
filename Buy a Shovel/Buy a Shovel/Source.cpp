#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int k = 0, r = 0;
	cin >> k >> r;

	int cnt = 1;
	while (true)
	{
		if ((cnt*k) % 10 == 0) {			
			break;
		}		
		else if ((cnt * k)%10 == r)
		{		
			break;
		}
		else
		{
			cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}