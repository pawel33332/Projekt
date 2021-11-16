#include <iostream>
#include <cmath>
#include "funkcja_kwadratowa.hpp"
using namespace std;
double b, c;
double funkcja_kanoniczna(double aa, double pp, double qq)
{

	b = -2 * aa * pp;
	c = (aa * pow(pp, 2)) + qq;
	funkcja_kwadratowa(aa, b, c);
	return 0;
}
