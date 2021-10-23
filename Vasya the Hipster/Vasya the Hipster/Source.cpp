#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int a = 0, b = 0;
	cin >> a >> b;

	int diff = 0;
	int left = 0;
	
	if (a < b) {
		diff = a;
		left = b - a;
	}
	else {
		diff = b;
		left = a - b;
	}

	cout << diff << " " << left / 2 << endl;

	return 0;
}