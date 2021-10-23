#include <iostream>
using namespace std;

int main()
{
	int n=0, k=0, l=0, c=0, d=0, p=0, nl=0, np = 0;

	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int totslices = c * d;
	int totalmls = k * l;

	int nooftoasts = 0;
	while (totalmls >= nl && totslices > 0 && p >= np)
	{
		nooftoasts++;
		totalmls -= nl;
		totslices--;
		p -= np;
	}
	cout << nooftoasts/n << "\n";
	
	return 0;
}