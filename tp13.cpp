#include <iostream>

using namespace std;

int main() {
  float numero;

  cout << "Ingrese un número: ";
  cin >> numero;

  if (numero > 0) {
    cout << "El número es positivo" << endl;
  } else if (numero == 0) {
    cout << "El número es cero" << endl;
  } else {
    cout << "El número es negativo" << endl;
  }

  return 0;
}
