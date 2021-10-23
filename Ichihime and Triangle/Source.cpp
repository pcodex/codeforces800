#include <iostream>
using namespace std;


int main()
{
	int nooftests = 0;

	cin >> nooftests;

	for (int i = 0; i < nooftests; ++i) {

		int a = 0, b = 0, c = 0, d = 0;

		cin >> a >> b >> c >> d;

		int x = a;
		int y = b;
		int z = c;		

		while (x + y <= z) {	
			
			int xydiff = y - x;
			if(x+xydiff <= b)
				x = x + xydiff;
		
			if (x + y <= z) {
				int zdiff = z - (x + y);
				if(y+zdiff+1 <= c)
					y = y + zdiff+1;
			}
		}				
		
		cout << x << " " << y << " " << z << endl;
	}

	return 0;
}