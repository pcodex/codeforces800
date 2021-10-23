#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
	string inp = "";
	getline(cin, inp);

	set<char> myset;

	stringstream ss(inp);
	char mletter = ' ';
	
	

	while (ss >> mletter) {

		/*if (isdigit(mletter))
		{
			stringstream sint;
			sint << mletter;
			int aval;
			sint >> aval;
			vals.push_back(aval);
		}*/

		if(isalpha(mletter))		 
			myset.insert(mletter);		
	}

	
	cout << myset.size() << endl;

	return 0;
}