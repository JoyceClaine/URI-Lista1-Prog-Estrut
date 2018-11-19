#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float s, t, i, r, x, y;
	cin >> s;

	if(s <= 2000.00)
	{
		cout << "Isento" << endl;
	}
	else if (s <= 3000.00)
	{
		t = s - 2000.00;
		i = t * 8 / 100;
		cout << fixed << setprecision(2);
		cout << "R$ " << i << endl;
	}
	else if (s <= 4500.00)
	{
		t = s - 3000.00;
		i = t * 18 / 100 ;
		r = 1000 * 8 / 100;
		x = i + r;
		cout << fixed << setprecision(2);
		cout << "R$ " << x << endl;
	}
	else if (s > 4500.00)
	{
		t = s - 4500.00;
		i = t * 28 / 100;
		y = 1500 * 18 / 100;
		r = 1000 * 8 / 100;
		x = i + y + r;
		cout << fixed << setprecision(2);
		cout << "R$ " << x << endl;
	}
	return 0;
}
