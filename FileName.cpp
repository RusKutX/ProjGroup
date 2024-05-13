#include <iostream>
#include <cmath>
using namespace std;

void input(double k, double V, double t, double Hg, double Hs, double D, double L, double d)
{
	do {
		cout << "¬ведите k: "; cin >> k;
	} while (k <= 0 || k >= 1);

	cout << endl;

	do {
		cout << "¬ведите t: "; cin >> t;
	} while (t <= 0 || t >= 24);

	cout << endl;

	do {
		cout << "¬ведите V: "; cin >> V;
		cout << "¬ведите Hg: "; cin >> Hg;
		cout << "¬ведите Hs: "; cin >> Hs;
		cout << "¬ведите D: "; cin >> D;
		cout << "¬ведите L: "; cin >> L;
		cout << "¬ведите d: "; cin >> d;
	} while (V <= 0 || Hg <= 0 || Hs <= 0 || D <= 0 || L <= 0 || d <= 0);
}

int main()
{
	setlocale(0, "");
	double k = 0;
	double V = 0;
	double t = 0;
	double Hg = 0;
	double Hs = 0;
	double D = 0;
	double L = 0;
	double d = 0;

	input(k, V, t, Hg, Hs, D, L, d);

	int main()
	{
		setlocale(LC_ALL, "");
		double k, V, t, Hg, Hs, D, L, d, hl, Q;
}