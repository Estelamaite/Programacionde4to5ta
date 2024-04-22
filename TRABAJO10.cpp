#include <iostream>
#include <string>

using namespace std;

int main()
{
    int DDD= 0;
    string cartel="DDD no encontrado ";
    cout << "Ingrese el codigo de area: "<<endl;
    cin >> DDD;
    if(DDD==61) {
    cartel= "El destino es Brasilia" ;
    }
    if(DDD == 71) {
    cartel= "El destino es Salvador" ;
    }  if(DDD == 11) {
    cartel= "El destino es Sao Paulo";
    }   if(DDD == 21) {
    cartel= "El destino es Rio de Janeiro" ;
    }   if(DDD == 32) {
    cartel= "El destino es Juiz de Fora" ;
    }   if(DDD == 19) {
    cartel= "El destino es Campinas" ;
    }   if(DDD == 27) {
    cartel= "El destino es Vitoria" ;
    }   if(DDD == 31) {
    cartel= "El destino es Belo Horizonte" ;
    }
    cout<<cartel<<endl;

    return 0;
}

