#include <iostream>
#include <cmath>
#include "funkcja_kwadratowa.hpp"
#include "funkcja_liniowa.hpp"
#include "funkcja_kanoniczna.hpp"
using namespace std;


int main()
{
	double a, b, c, p, q;
	int funkcja;
	cout << "Czy chcesz obliczyc miejsca zerowe funckji kwadratowej (wpisz 1) funkcji liniowej (wpisz 2) czy na podstawie funkcji kanonicznej (wpisz 3)" << endl;
	cin >> funkcja;

	if (funkcja == 1)
	{
		cout << "Wybrales obliczanie miejsc zerowych funkcji kwadratowej" << endl;
		cout << "Podaj wspolczynnik a: ";
		cin >> a;
		cout << "Podaj wspolczynnik b: ";
		cin >> b;
		cout << "Podaj wspolczynnik c: ";
		cin >> c;
		funkcja_kwadratowa(a, b, c);
	}
	else if (funkcja == 2)
	{
		cout << "Wybrales obliczanie miejsc zerowych funkcji liniowej" << endl;
		cout << "Podaj wspolczynnik a: ";
		cin >> a;
		cout << "Podaj wspolczynnik b: ";
		cin >> b;
		funkcja_liniowa(a, b);
	}
	else if (funkcja == 3)
	{
		cout << "Wybrales obliczanie miejsc zerowych na podstawie funkcji kanonicznej" << endl;
		cout << "Podaj wspolczynnik a: ";
		cin >> a;
		cout << "Podaj wspolczynnik p: ";
		cin >> p;
		cout << "Podaj wspolczynnik q: ";
		cin >> q;
		funkcja_kanoniczna(a, p, q);
	}


}