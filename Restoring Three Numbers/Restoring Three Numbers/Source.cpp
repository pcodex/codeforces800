#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int v1=0,v2=0,v3=0,v4=0;
	cin >> v1 >> v2 >> v3 >> v4;

	vector<int> v{ v1, v2, v3, v4 };
	sort(v.begin(), v.end());

	cout << v[3] - v[0] << " " << v[3] - v[1] << " " << v[3] - v[2] << endl;

	return 0;

}