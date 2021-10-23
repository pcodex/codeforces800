#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int noOfParticipants = 0, finisherNo = 0;
	cin >> noOfParticipants >> finisherNo;
	vector<int> scores;

	for (int i = 0; i < noOfParticipants; ++i) {
		int ascore = 0;
		cin >> ascore;
		scores.push_back(ascore);
	}

	int counter = 0;
	for (int j = 0; j < scores.size(); ++j)
	{
		if (scores[j] >= scores[finisherNo - 1] && scores[j] > 0)
			counter++;
	}

	cout << counter << "\n";

	return 0;
}