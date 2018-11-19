#include <iostream>
using namespace std;
int main(){
	int n, hora, min, seg, resto;
	cin >> n;
	hora = n/3600;
	resto = n%3600;
	min = resto/60;
	seg = resto %60;
	cout << hora << ":" << min <<":" << seg <<  endl;
	return 0;
}