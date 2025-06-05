#include <iostream>
using namespace std;

int sumaDigitos(int numero) {
    if (numero == 0)
        return 0;
    else
        return (numero % 10) + sumaDigitos(numero / 10);
}
int main() {
    int numero;
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
        return 1;
    }
    int resultado = sumaDigitos(numero);
    cout << "La suma de los dígitos de " << numero << " es: " << resultado << endl;
    return 0;
}


