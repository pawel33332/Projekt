#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a, b,c ;
	int funkcja;
	cout<<"Czy chcesz obliczyc miejsca zerowe funckji kwadratowej (wpisz 1) czy funkcje liniowa (wpisz 2)"<<endl;
	cin>>funkcja;
	
	if(funkcja==1)
	{
	cout<<"Wybrales obliczanie miejsc zerowych funkcji kwadratowej"<<endl;	
	cout<<"Podaj wspolczynnik a: ";
	cin>>a;
	cout<<"Podaj wspolczynnik b: ";
	cin>>b;
	cout<<"Podaj wspolczynnik c: ";
	cin>>c;
	
	if(a==0)
    {
    	if(b==0)
    	{
    		if(c==0)
    		{
    			cout<<"Nieskonczenie wiele miejsc zerowych"<<endl;
			}
			cout<<"Brak miejsc zerowych"<<endl;
		}
		cout<<"Miejsce zerowe x0 wynosi "<<(-c)/b<<endl;
	} else {
	
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
	
	
		
	} else if(funkcja==2)
	{
	cout<<"Wybrales obliczanie miejsc zerowych funkcji liniowej"<<endl;		
	cout<<"Podaj wspolczynnik a: ";
	cin>>a;
	cout<<"Podaj wspolczynnik b: ";
	cin>>b;	
	if(a!=0)
	{
		cout<<"Miejsce zerowe funkcji wynosi: "<<-b/a<<endl;
	}
	else {
		if(b==0)
		{
		cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych"<<endl;

		}
		else {
			cout<<"Funkcja nie ma miejsc zerowych "<<endl;
		}
	}	
	}
	
	
	

    
  
	
}
