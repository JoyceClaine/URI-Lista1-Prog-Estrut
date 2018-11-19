#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	float y, s;

	cin >> x;
	cin >> y;
	s = x / y;
	cout << fixed << setprecision (3);
	cout << s << " km/l" << endl;
	return 0;
}
