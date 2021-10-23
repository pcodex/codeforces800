#include <iostream>
#include <map>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int days = 0;
		cin >> days;
		string tasks;
		cin >> tasks;

		map<char, bool> complete;
		bool distracted = false;

		for (int j = 0; j < days; ++j)
		{
			if (complete[tasks[j]] == true)
			{
				distracted = true;
				break;
			}

			if ((j < days-1) && tasks[j + 1] == tasks[j])
				continue;
			else
			{
				complete[tasks[j]] = true;
			}
		}
		if (distracted)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}