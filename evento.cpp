# include <iostream>
# include <cstring>
using namespace std;
int main()
{
	int d, d1, d2, hi, mi, si, hf, mf, sf, h , m, s;
	char dia[4], c;

	cin >> dia >> d1;
	cin >> hi >> c >> mi >> c >> si;
	cin >> dia >> d2;
	cin >> hf >> c >> mf >> c >> sf;
	
	d = d2 - d1;
	h = hf - hi;
	m = mf - mi;
	s = sf - si;
	
	if (h < 0)
	{
		h += 24;
		d -= 1;
	}
	if (m < 0)
	{
		m += 60;
		h -= 1;
	}
	if (s < 0)
	{
		s += 60;
		m -= 1;
	}

	cout << d << " dia(s)" << endl;
	cout << h << " hora(s)" << endl;
	cout << m << " minuto(s)" << endl;
	cout << s << " segundo(s)" << endl;

	return 0;
}



