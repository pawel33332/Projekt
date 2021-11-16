#include <iostream>
#include <cmath>
using namespace std;

double funkcja_kwadratowa(double aa, double bb, double cc)
{


	if (aa == 0)
	{
		if (bb == 0)
		{
			if (cc == 0)
			{
				cout << "Nieskonczenie wiele miejsc zerowych" << endl;
			}
			cout << "Brak miejsc zerowych" << endl;
		}
		cout << "Miejsce zerowe x0 wynosi " << (-cc) / bb << endl;
	}
	else {

		double delta = pow(bb, 2) - (4 * aa * cc);
		if (delta > 0)
		{
			double x1 = (-bb - sqrt(delta)) / (2 * aa);
			double x2 = (-bb + sqrt(delta)) / (2 * aa);
			cout << "Miejsca zerowe wynosza " << x1 << " oraz " << x2 << endl;
		}
		else if (delta == 0)
		{
			double x0 = (-bb) / (2 * aa);
			cout << "Miejsce zerowe wynosi " << x0 << endl;
		}
		else {
			cout << "Nie ma miejsc zerowych" << endl;
		}
	}
	return 0;
}
