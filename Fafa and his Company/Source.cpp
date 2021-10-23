#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int tls = 1;
	int devs = n-tls;	

	int cnter = 0;
	if (devs >= tls) {
		cnter++;
		//cout << "\nTLs: " << tls << " Devs: " << devs << endl;
	}

	while (devs >= tls)
	{
		tls++;
		devs = n - tls;
		if (devs >= tls && devs % tls == 0) {
			cnter++;
			//cout << "\nTLs: " << tls << " Devs: " << devs << endl;
		}
	}

	cout << cnter << endl;
	return 0;
}