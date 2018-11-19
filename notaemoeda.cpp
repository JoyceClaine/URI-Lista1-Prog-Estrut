#include <iostream>
using namespace std;
int main()
{
	double n;
	int nota,moeda,m,n100,n50,n20,n10,n5,n2,m1,m050,m25,m010,m05,m01,r100,r50,r20,r10,r5,r2,r1,r050,r25,r010,r05;
	
	cin >> n;
	nota = n;
	n = 100*n;
	moeda= n;
	m = moeda%100;
		
	n100 = nota / 100;
	r100 = nota % 100;
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
	m1 = r2 / 1;
	r1 = r2 % 1;
	m050 = m / 50;
	r050 = m % 50;
	m25 = r050 / 25;
	r25 = r050 % 25;
	m010 = r25 / 10;
	r010 = r25 % 10;
	m05 = r010 / 5;
	r05 = r010 % 5;
	m01 = r05 / 1;
	
	cout << "NOTAS:" << endl;
	cout << n100 << " nota(s) de R$ 100.00" << endl;
	cout << n50 << " nota(s) de R$ 50.00" << endl;
	cout << n20 << " nota(s) de R$ 20.00" << endl;
	cout << n10 << " nota(s) de R$ 10.00" << endl;
	cout << n5 << " nota(s) de R$ 5.00" << endl;
	cout << n2 << " nota(s) de R$ 2.00" << endl;

	cout << "MOEDAS:" << endl;
	cout << m1 << " moeda(s) de R$ 1.00" << endl;
	cout << m050 << " moeda(s) de R$ 0.50" << endl;
	cout << m25 << " moeda(s) de R$ 0.25" << endl;
	cout << m010 << " moeda(s) de R$ 0.10" << endl;
	cout << m05 << " moeda(s) de R$ 0.05" << endl;
	cout << m01 << " moeda(s) de R$ 0.01" << endl;

	return 0;
}


