#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int dim = 0;

	cin >> dim;

	vector<vector<int>> vin;
	
	vector<int> vr1;
	for (int z = 0; z < dim; z++)
		
		//add element to the vector
		vr1.push_back(1);
	vin.push_back(vr1);

	for (int y = 1; y < dim; ++y) {
		vector<int> vrother;
		vrother.push_back(1);
		for (int z = 1; z < dim; z++)
			vrother.push_back(0);

		vin.push_back(vrother);
	}

	for (int r = 1; r < dim; ++r)
	{
		for (int c = 1; c < dim; ++c)
		{
			vin[r][c] = vin[r - 1][c] + vin[r][c - 1];
		}
	}

	cout << vin[dim - 1][dim - 1] << endl;
		
	return 0;

}
