#include <iostream>
using namespace std;
int main() {
    double perimetro, altura = 0, base = 0;
    // Validar altura
    while (altura <= 0) {
        cout << "Ingrese la altura del rectangulo: ";
        cin >> altura;
        if (altura <= 0) {
            cout << "Numero invalido. Vuelva a intentar." << endl;
        }
    }
    // Validar base
    while (base <= 0) {
        cout << "Ingrese la base del rectangulo: ";
        cin >> base;
        if (base <= 0) {
            cout << "Numero invalido. Vuelva a intentar." << endl;
        }
    }
    perimetro = (base + altura) * 2;
    cout << "El perimetro del rectangulo es: " << perimetro;
    return 0;
}

