#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int idade, c;
	float media,soma;
	c = 0;
	soma =0;
	
	while(cin >> idade)
	{
		if(idade < 0)
			break;
			soma += idade;
			c++;
	}
	cout << fixed << setprecision (2);
 	media = soma/c;
 	cout << media;
	return 0;
}
