#include <iostream>
using namespace std;
int main()
{
	int i, f, s;
	cin >> i >> f;
	if (i >= f)
		s = (24 - i) + f;
	else
		s = (f - i);

	cout << "O JOGO DUROU " << s << " HORA(S)\n";
	return 0;
}
