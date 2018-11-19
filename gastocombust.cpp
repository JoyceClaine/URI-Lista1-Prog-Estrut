#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float t, veloc, res;
	cin >> t >> veloc;

	res = (t * veloc) / 12;
	cout << fixed << setprecision(3);
	cout << res << endl;
	return 0;
}
