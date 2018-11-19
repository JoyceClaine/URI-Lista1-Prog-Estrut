#include <iostream>
#include <math.h> //biblioteca matematica
using namespace std;
int main()
{
	float a, b, c, t, cir, tp, q, r;
	cin >> a >> b >> c;
	t = (a * c) / 2;
	cir = pow(c, 2) * 3.14159; //pow calcula potencia
	tp = ((a + b) * c) / 2;
	q = pow(b, 2);
	r = a * b;
	cout << fixed;
	cout.precision(3);
	cout << "TRIANGULO: " << t ;
	cout << "\nCIRCULO: " << cir ;
    cout << "\nTRAPEZIO: " << tp ;
    cout << "\nQUADRADO: " << q ;
    cout << "\nRETANGULO: " << r << "\n";
    return 0;
}
