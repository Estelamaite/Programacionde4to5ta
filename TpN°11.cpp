#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int dia;
	
	string cartel= "NO ES UN DIA DE SEMANA";
		
		cout<<"Ingrese numero de semana"<<endl;
			cin>>dia;
		if (dia==1)
		
		{
			 cartel = "Lunes";
		}
		if (dia==2)
		
		{
			 cartel = "Martes";
		}
		if (dia==3)
		
		{
			 cartel = "Miercoles";
		}
		if (dia==4)
		
		{
			 cartel = "Jueves";
		}
		if (dia==5)
		
		{
			 cartel = "Viernes";
		}
		if (dia==6)
		
		{
			 cartel = "Sabado";
		}
		if (dia==7)
		
		{
			 cartel = "Domingo";
		}
		cout<<cartel<<endl;
		
			return 0;
	
}
