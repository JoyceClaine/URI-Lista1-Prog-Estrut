#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double y, b = 1, s = 0;
	for(double x = 1; x <= 39; x = x + 2)
	{
		y =x/b;
		

		s = s + y;
		b = b * 2;
	}
	cout << fixed << setprecision(2);
	cout << s << endl;

	return 0;
}
