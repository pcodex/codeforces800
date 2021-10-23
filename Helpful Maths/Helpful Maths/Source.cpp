#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	string inp;
	cin >> inp;

	vector<char> nums;
	for (int i = 0; i < inp.length(); ++i)
	{
		if(inp[i]!='+')
			nums.push_back(inp[i]);
	}
	sort(nums.begin(), nums.end());

	string fn = "";
	for (int z = 0; z < nums.size(); ++z)
	{
		fn += string(1, nums[z]);
		if (z < nums.size() - 1)
			fn += '+';
	}
	cout << fn << "\n";

	return 0;
}