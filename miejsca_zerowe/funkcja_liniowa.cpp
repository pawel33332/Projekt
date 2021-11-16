#include <iostream>
#include <cmath>
using namespace std;

double funkcja_liniowa(double aa, double bb)
{

	if (aa != 0)
	{
		cout << "Miejsce zerowe funkcji wynosi: " << -bb / aa << endl;
	}
	else {
		if (bb == 0)
		{
			cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;

		}
		else {
			cout << "Funkcja nie ma miejsc zerowych " << endl;
		}
	}
	return 0;
}

