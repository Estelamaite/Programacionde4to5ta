#include <iostream>
using namespace std;

int main ()
{
	string nombre;
	float sueldo,aumento,sueldo_final;
	int anio_ingreso;
	cout<<"ingrese su nombre"<<endl;
	cin>>nombre;
	cout<<"ingrese su sueldo"<<endl;
	cin>>sueldo;
	cout<<"ingrese su anio_ingreso"<<endl;
	cin>>anio_ingreso;
	
	if (anio_ingreso<=15)
	{
	 aumento= sueldo*0.2;
	}
	else
	{
	 aumento= sueldo*0.8;
	}
	sueldo_final = sueldo + aumento;

  cout << "nombre: " << nombre << endl;
  cout << "sueldo actual: " << sueldo << endl;
  cout << "aumento: " << aumento << endl;
  cout << "sueldo final: " << sueldo_final << endl;
	
}
