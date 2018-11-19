#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float salario, reaj, nsal;
	int p;
	cin >> salario;


	if (salario >= 0 && salario <= 400.00)
	{
		reaj = salario * 15 / 100;
		nsal = salario + reaj;
	   	p = 15;
	}
	if (salario >= 400.01 && salario <= 800.00)
	{
		reaj = salario * 12 / 100;
		nsal = salario + reaj;
	   	p = 12;
	}
	if (salario >= 800.01 && salario <= 1200.00)
	{
		reaj = salario * 10 / 100;
		nsal = salario + reaj;
	   	p = 10;
	}
	if (salario >= 1200.01 && salario <= 2000.00)
	{
		reaj = salario * 7 / 100;
		nsal = salario + reaj;
	   	p = 7;
	}
	if (salario > 2000.00 )
	{
		reaj = salario * 4 / 100;
		nsal = salario + reaj;
	   	p = 4;
	}
	
	cout << fixed << setprecision(2);
	cout << "Novo salario: " << nsal << endl;
	cout << "Reajuste ganho: " << reaj << endl;
	cout << "Em percentual: " << p << " %" << endl;
	return 0;
}
