#include <iostream>

using namespace std;

int main() {
  float numero;

  cout << "Ingrese un n�mero: ";
  cin >> numero;

  if (numero > 0) {
    cout << "El n�mero es positivo" << endl;
  } else if (numero == 0) {
    cout << "El n�mero es cero" << endl;
  } else {
    cout << "El n�mero es negativo" << endl;
  }

  return 0;
}
