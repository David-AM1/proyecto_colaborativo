#include <iostream>
using namespace std;
int mayorDeTres(int a, int b, int c) {
    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    return mayor;
}
int main() {
    int x, y, z;
    cout << "Ingrese el valor de x: ";
    cin >> x;
        cout << "Ingrese el valor de y: ";
    cin >> y;
        cout << "Ingrese el valor de z: ";
    cin >> z;
    int mayor = mayorDeTres(x, y, z);
    cout << "El mayor es: " << mayor << endl;
    return 0;
}

