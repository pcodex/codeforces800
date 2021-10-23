#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;
	int yrcnt = 0;

	while (a <= b)
	{
		a = 3 * a;
		b = 2 * b;
		yrcnt++;
	}

	cout << yrcnt << endl;
	return 0;
}