#include <iostream>
using namespace std;
int main()
{

	int n, n100, n50, n20, n10, n5, n2, n1, r100, r50, r20, r10, r5, r2, r1;

	cin >> n;
	cout << n << endl;
	
	n100 = n / 100;
	r100 = n % 100;
	n50 = r100 / 50;
	r50 = r100 % 50;
	n20 = r50 / 20;
	r20 = r50 % 20;
	n10 = r20 / 10;
	r10 = r20 % 10;
	n5 = r10 / 5;
	r5 = r10 % 5;
	n2 = r5 / 2;
	r2 = r5 % 2;
	n1 = r2 / 1;
	r1 = r2 % 1;
	
	
	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n1 << " nota(s) de R$ 1,00" << endl;

return 0;
}



