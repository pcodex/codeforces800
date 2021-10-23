#include <iostream>
using namespace std;


int main()
{
	int n = 0, k = 0;
	cin >> n >> k;

	int minsLeft = (4 * 60) - k;

	int prbCnt = 0;
	int prbTime = 0;

	
	while (prbTime < minsLeft && prbCnt<n)
	{
		prbTime += 5 * (prbCnt+1);
		if(prbTime<=minsLeft)
			prbCnt++;
	}

	cout << prbCnt << endl;

	return 0;
}