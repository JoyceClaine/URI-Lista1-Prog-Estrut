#include <iostream>
using namespace std;

int main()
{
	int n, n1, n2, n3, c;
	cin >> n;
	n1 = 0;
	n2 = 1;
	cout << n1 << " " << n2;
	for(c = 3; c <= 46; c++)
	{
		while(c <=n)
		{
			n3 = n1 + n2;
			cout << " " << n3;
			n1 = n2;
			n2 = n3;
			c += 1;	
			
		}		
	}
	cout << endl;
	return 0;
}
