#include <iostream>
using namespace std;
int main()
{
	int ct, i, c, num, div;
	cin >> ct;

	for(c = 0; c < ct; c++)
	{
		div = 0;
		cin >> num;
		for (i = 2; i < num; i++)
		{
			if(num % i == 0)
			{
				div = 1;
				break;
			}

			else (div = 2);
		}
		if (div == 2 || num == 2)
			cout << num << " eh primo" << endl;
		else
			cout << num << " nao eh primo" << endl;
	}
	return 0;
}

