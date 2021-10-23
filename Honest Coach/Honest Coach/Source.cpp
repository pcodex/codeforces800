#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int noOfTest = 0;
	cin >> noOfTest;

	for (int i = 0; i < noOfTest; ++i)
	{
		int noOfAthletes = 0;
		cin >> noOfAthletes;
		vector<int> athleteStrength;

		for (int j = 0; j < noOfAthletes; ++j)
		{
			int strength = 0;
			cin >> strength;
			athleteStrength.push_back(strength);
		}
		sort(athleteStrength.begin(), athleteStrength.end());

		int diff = 1001;
		for (int z = 0; z < athleteStrength.size()-1; ++z)		
		{
			if (abs(athleteStrength[z] - athleteStrength[z + 1]) < diff)
				diff = abs(athleteStrength[z] - athleteStrength[z + 1]);
		}
		cout << diff << endl;
	}

	return 0;
}