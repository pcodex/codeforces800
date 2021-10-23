#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int noOfWords = 0;
	cin >> noOfWords;

	string inWord = "";
	for (int i = 0; i < noOfWords; ++i) {
		cin >> inWord;

		if (inWord.size() > 10)
		{
			string newWord = string(1, inWord[0]);
			int theNum = inWord.length() - 2;
			stringstream ss;
			ss << theNum;
			
			newWord = newWord + ss.str();
			newWord += inWord[inWord.length() - 1];
			cout << newWord<<"\n";
		}
		else
		{
			cout << inWord<<"\n";
		}	
	}
	return 0;
}