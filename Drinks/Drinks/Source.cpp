#include <iostream>
using namespace std;


int main()
{
	int in=0;
	cin >> in;

	double sum = 0;
	int val = 0;
	for (int i = 0; i < in; ++i)
	{
		cin >> val;
		sum += val;
	}

	cout << sum / in << endl;

	return 0;

}