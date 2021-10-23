#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

	int inp = 0;
	cin >> inp;

	int mxprimes = inp / 2;
	cout << mxprimes<<endl;
	for (int i = 0; i < mxprimes-1; ++i)
	{
		cout << 2 <<" ";
	}
	
	if (inp % 2 == 0)
		cout << 2 << endl;
	else
		cout << 3 << endl;

	return 0;
}