#include <iostream>
using namespace std;

int esPrimo(int numero) {
    if (numero <= 1) return 0;
    if (numero == 2) return 1;
    if (numero % 2 == 0) return 0;
    int i = 3;
    while (i * i <= numero) {
        if (numero % i == 0) return 0;
        i += 2;
    }
    return 1;
}
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (esPrimo(num)) {
        cout << num << " El numero es Primo." << endl;
    } else {
        cout << num << " El numero no es Primo." << endl;
    }
    return 0;
}

