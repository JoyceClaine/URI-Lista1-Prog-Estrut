#include <iostream>
using namespace std;
int main()
{

	int hi, mi, hf, mf, i, f, t, h, m;
	cin >> hi >> mi >> hf >> mf;
	
	hi = hi * 60;
	hf = hf * 60;
	i = hi + mi;
	f = hf + mf;
	t = f - i;

	if (f <= i)
	{
		t = t + (24 * 60);
		h = t/ 60;
	}
	else if (f >= i)
		h = t/60;

	if (mi > mf)
		m = (60 - mi) + mf;
	else if (mi == mf)
		m = (mi - mf);
	else
		m = (mf - mi);

		cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

	return 0;
}

