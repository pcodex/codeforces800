#include <string>
#include <iostream>
using namespace std;

int main() 
{
	int num;
	cin >> num;

	string inp;
	cin >> inp;

	int counter = 0;	
	for (int i = 0; i < inp.length(); ++i)
	{		
		if (inp[i] == inp[i+1])
		{
			counter++;			
		}		
	}

	cout << counter << "\n";
	return 0;
}