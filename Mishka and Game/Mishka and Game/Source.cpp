#include <iostream>
#include <string>
using namespace std;

int main() {
	int noOfRounds = 0;

	cin >> noOfRounds;

	int m = 0, c = 0;
	int mcnt = 0, ccnt = 0;
	for (int i = 0; i < noOfRounds; ++i)
	{
		cin >> m >> c;
		if(m>c) mcnt++;
		else if(c>m)ccnt++;		
	}

	if (mcnt > ccnt)
		cout << "Mishka" << endl;
	else if (ccnt > mcnt)
		cout << "Chris" << endl;
	else
		cout << "Friendship is magic!^^" << endl;

	return 0;
}