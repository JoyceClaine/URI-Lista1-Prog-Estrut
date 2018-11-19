#include <iostream>
using namespace std;
int main()
{
	int n, cont, fat;
	cin >> n;
	fat = 1;
	for (cont = 1; cont <= n; cont++)
	{
		fat *= cont;
	}
	cout << fat << "\n";
	return 0;
}
