#include <iostream>
#include <string>
using namespace std;

int main()
{

	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;

	cin >> a1 >> a2 >> a3 >> a4;
	string strips;
	//get strips
	cin >> strips;

	int totcal = 0;

	for (int i = 0; i < strips.length(); ++i)
	{
		// strip chars
		switch (strips[i])
		{
		case '1':
			totcal += a1;
			break;
		case '2':
			totcal += a2;
			break;
		case '3':
			totcal += a3;
			break;
		case '4':
			totcal += a4;
			break;
		}
	}

	cout << totcal << endl;
	return 0;
}
