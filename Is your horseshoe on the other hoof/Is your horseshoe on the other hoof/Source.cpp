#include <set>
#include <iostream>

using namespace std;

int main()
{
	int shoes = 0;
	set<int> ss;

	for (int i = 0; i < 4; ++i) {
		cin >> shoes;
		ss.insert(shoes);
	}

	cout << 4 - ss.size() << endl;

	return 0;

}