#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int amt = 0;

	cin >> amt;

	//greedy and DP

	int huns = amt / 100;
	int twe = (amt - (huns*100)) / 20;
	int tens = (amt - ((huns * 100) + (twe * 20)))/10;
	int fivs = (amt - ((huns * 100) + (twe * 20) + (tens*10)))/5;
	int ons = (amt - ((huns * 100) + (twe * 20) + (tens * 10) + (fivs*5)))/1;

	cout << huns + twe + tens + fivs + ons << endl;

	return 0;
}