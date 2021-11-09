#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a, b,c ;
	cout<<"Podaj wspolczynnik a: ";
	cin>>a;
	cout<<"Podaj wspolczynnik b: ";
	cin>>b;
	cout<<"Podaj wspolczynnik c: ";
	cin>>c;

    double delta=pow(b,2)-(4*a*c);
    if(delta>0)
    {
    	double x1=(-b-sqrt(delta))/(2*a);
    	double x2=(-b+sqrt(delta))/(2*a);
    	cout<<"Miejsca zerowe wynosza "<<x1<<" oraz "<<x2<<endl;
	}
	else if(delta==0)
	{
		double x0=(-b)/(2*a);
		cout<<"Miejsce zerowe wynosi "<<x0<<endl;
	}
	else {
		cout<<"Nie ma miejsc zerowych"<<endl;
	}
	
	
	
}
