#include <iostream>

using namespace std;

int main()
{
	int noofcubes = 0;

	cin >> noofcubes;

	int level = 1;
	int sum = 1;
	int tot = sum;
	while (tot < noofcubes)
	{
		level += 1;
		sum += level;
		tot += sum;
		if (tot > noofcubes)
			level -= 1;
	}
	cout << level << endl;

	return 0;
}