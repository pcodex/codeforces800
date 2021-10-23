#include <string>
#include <iostream>

using namespace std;

int main()
{
	int no = 0;
	cin >> no;

	int sum = 0;

	for (int i = 0; i < no; ++i)
	{
		string fig;
		cin >> fig;

		if (fig == "Icosahedron")
			sum += 20;
		else if (fig == "Dodecahedron")
			sum += 12;
		else if (fig == "Octahedron")
			sum += 8;
		else if (fig == "Cube")
			sum += 6;
		else
			sum += 4;
	}

	cout << sum << endl;
	return 0;
}