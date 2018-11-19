#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

	float x1, y1, x2, y2, X, Y, dist;
	cin >> x1 >> y1 >> x2 >> y2;

	X = x2 - x1;
	Y = y2 - y1;
	dist = sqrt(pow(X, 2) + pow(Y, 2));
	cout << fixed << setprecision(4);
	cout << dist << endl;
	return 0;
}
