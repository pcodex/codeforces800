#include <string>
#include <iostream>
#include <sstream>
using namespace std;


int main()
{
	int noOfProbs = 0;
	cin >> noOfProbs;
	cin.ignore();
	int noSolved = 0;
	for (int i = 0; i < noOfProbs; ++i) {
		string strNos;
		getline(cin, strNos);

		stringstream ssin;
		ssin << strNos;
		int p1 = 0, p2 = 0, p3 = 0;
		ssin >> p1 >> p2 >> p3;
		if (p1 + p2 + p3 > 1)
			noSolved++;
	}

	cout<<noSolved<<"\n";
	return 0;
}