#include <iostream>

using namespace std;


int main()
{
	double a, b;
	cout<<"Podaj wspolczynnik a: ";
	cin>>a;
	cout<<"Podaj wyraz b: ";
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
			cout<<"Funkcja nie ma miejsc zerowych"<<endl;
		}
	}
	
	
}
