#include <string>
#include <iostream>

using namespace std;

int main()
{
	int row = 0, col = 0;
	int aval = 0;
	int noOfMoves = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j) {
			cin >> aval;
			if (aval == 1) {
				row = i;
				col = j;

				noOfMoves = abs(row - 2) + abs(col - 2);
				break;
			}
		}
	}

	cout << noOfMoves << '\n';

	return 0;
}