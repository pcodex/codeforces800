#include <iostream>
#include <cmath>
#include <set>
#include <sstream>

using namespace std;

int main()
{

	int nt = 0;
	cin >> nt;

	for (int i = 0; i < nt; ++i)
	{
		int num = 0;
		cin >> num;
		stringstream ssnum;
		ssnum << num;
		string strnum;
		ssnum >> strnum;
		int len = strnum.length();

		int cnter = 0;
		if (num < 10)
			cnter = num;
		else {
			cnter = (len - 1) * 9;
			string ender = string(len, strnum[0]);
			stringstream ssender(ender);
			int iender = 0;
			ssender >> iender;
			int loopender = strnum[0] - '0';
			if (num < iender)
				loopender -= 1;
			for (int z = 0; z < loopender; ++z)
				cnter += 1;
		}
		

		cout << cnter << endl;
	}
	
	return 0;
}