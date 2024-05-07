#include <iostream>
using namespace std;

int main() {
    int Numero;
    int DentroIntervalo = 0;
    int FueraIntervalo = 0;
    int i = 1;

    cout << "Ingresa un numero: ";
    cin >> Numero;

    while (i <= Numero) {
        if (i >= 10 && i <= 20) {
            DentroIntervalo++;
        } else {
            FueraIntervalo++;
        }
        i++;
    }

    cout << "Cantidad de numeros dentro del intervalo [10,20]: " << DentroIntervalo << endl;
    cout << "Cantidad de numeros fuera del intervalo [10,20]: " << FueraIntervalo << endl;

    return 0;
}
