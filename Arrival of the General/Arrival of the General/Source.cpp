#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int no = 0;
	cin >> no;
	vector<int> heights;

	for (int i = 0; i < no; ++i)
	{
		int ht = 0;
		cin >> ht;
		heights.push_back(ht);
	}

	vector<int>::iterator tall = max_element(heights.begin(), heights.end());
	vector<int>::reverse_iterator sht = min_element(heights.rbegin(), heights.rend());

	int talldist = distance(heights.begin(), tall);	
	int shtdist = distance(heights.rbegin(), sht);

	int shtleft = heights.size() - shtdist - 1;
	
	int moves = (talldist) + (shtdist);
	if (talldist > shtleft)
		moves -= 1;

	cout << moves << endl;
	return 0;

}