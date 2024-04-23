#include <iostream>
using namespace std;

int main()
{
    cout << "Maite ";
    float n1= 0;    
    float n2= 0;    
    float n3= 0;    
    float promedio= 0;  
    cout << "su primer nota es un: ";
    cin >> n1;
    cout << "Su segunda nota es un: ";
    cin >> n2;
    cout << "Su tercer nota es un: ";
    cin >> n3;
    promedio = (n1 + n2 + n3) / 3.0 ;
    cout << "su promedio es: " << promedio << endl;
    if(promedio < 7) {
    cout << "desaprobó";
    } else if(promedio==7) {
    cout << "aprobó";
    } else if(promedio > 7) {
    cout << "excelente";
    }    
    return 0;
}
