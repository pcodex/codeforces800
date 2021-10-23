#include <set>
#include <iostream>

using namespace std;

int main()
{
	int levels = 0;
	cin >> levels;
	set<int> slevel;

	for (int i = 0; i < 2; ++i)
	{
		int games = 0;
		cin >> games;
		for (int j = 0; j < games; ++j)
		{
			int level = 0;
			cin >> level;
			slevel.insert(level);
		}
	}

	cout << ((slevel.size() == levels) ? "I become the guy.\n" : "Oh, my keyboard!\n");
	return 0;

}