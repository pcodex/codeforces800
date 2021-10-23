#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int num)
{
	bool prime = true;

	if (num == 2 || num == 3 || num == 5 || num==7 || num == 11 || num ==13 || num==17 || num == 19)
		return prime;

	for (int i = 2; i <= num / 2; ++i)
	{		
		if (num % i == 0) {
			prime = false;
			break;
		}
	}

	return prime;
}

int main()
{
	int num = 0;
	cin >> num;

	int num1 = num / 2;
	int num2 = num - num1;

	while (isPrime(num1) || isPrime(num2))
	{
		num1 = num1 + 1;
		num2 = num - num1;
	}
	cout << num1 << " " << num2 << endl;

	return 0;
}