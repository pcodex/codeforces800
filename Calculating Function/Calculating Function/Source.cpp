#include <cmath>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	long long n = 0;
	cin >> n;

	if (n % 2 == 0)
		cout << n / 2 << endl;
	else
		cout << -((n + 1) / 2) << endl;
	
	return 0;

}

/*
-1  -1
2    1
-3  -2
4    2
-5   -3
6    3
-7   -4
8    4
-9   -5
10   5
-11  -6
12    6
-13   -7
14    7

26

*/