#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int noOfChildren = 0;

	cin >> noOfChildren;

	vector<int> prg, math, pe;

	for (int i = 0; i < noOfChildren; ++i)
	{
		int tal = 0;
		cin >> tal;
	
		if (tal == 1)
			prg.push_back(i + 1);
		else if (tal == 2)
			math.push_back(i + 1);
		else if (tal == 3)
			pe.push_back(i + 1);
	}
	int noofteams = prg.size();

	if (math.size() < prg.size())
		noofteams = math.size();
	if (pe.size() < noofteams)
		noofteams = pe.size();

	if (prg.size() == 0 || math.size() == 0 || pe.size() == 0)
	{
		cout << noofteams << endl;
	}
	else
	{
		cout << noofteams << endl;
		for (int i = 0; i < noofteams; ++i)
			cout << prg[i] << " " << math[i] << " " << pe[i] << endl;
	}

	return 0;
}