#include <iostream>
using namespace std;
int main(){
	int n, mes, ano, resto, dia;
	cin >> n;
	ano = n/365;
	resto = n%365;
	mes = resto/30;
	dia = resto%30;
	cout << ano << " ano(s)" << endl << mes << " mes(es)" << endl << dia << " dia(s)" << endl;
	return 0;
}