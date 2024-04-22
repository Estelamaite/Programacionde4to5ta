#include <iostream>
using namespace std;
int main() 
{

  float respuesta;
  cout<<"¿usted es culpable? 1= si 2= no"<<endl;
  cin>>respuesta;
  if (respuesta == 1)
  {
   cout <<"iras a la carcel";
  }
  else  
  {
  cout << "iras a casa.";
  } 
  	return 0;
  }
