#include <iostream>
using namespace std;


int main()
{
	int n = 0;
	cin >> n;
	int amazCnt = 0;
	int max = 0, min = 0;
	for (int i = 0; i < n; ++i)
	{
		int sco = 0;		
		cin >> sco;

		if (i == 0) {
			max = sco;
			min = sco;
		}
		else {
			
			if (sco > max) {
				max = sco;				
				amazCnt++;
			}
			else if (sco < min) {
				min = sco;				
				amazCnt++;
			}
		}
	}
	cout << amazCnt << endl;
	return 0;
}