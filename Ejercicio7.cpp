#include <iostream>
using namespace std;
int sumaDigitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10; 
        numero /= 10;       
    }
    return suma;
}
int main() {
    int numero;
    cout << "Ingrese un n�mero entero positivo: ";
    cin >> numero;
    if (numero < 0) {
        cout << "Por favor, ingrese un n�mero positivo." << endl;
        return 1;
    }
    int resultado = sumaDigitos(numero);
    cout << "La suma de los d�gitos de " << numero << " es: " << resultado << endl;
    return 0;
}

