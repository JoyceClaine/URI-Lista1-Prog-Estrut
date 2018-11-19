#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double Y, S=0;
	for(double x=1;x<=100;x++)
	{
		Y=1/x;
		S= S + Y;
	}
    cout << fixed << setprecision(2);
    cout << S << endl;
    
    return 0;
}