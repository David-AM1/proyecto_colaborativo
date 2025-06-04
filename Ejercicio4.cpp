#include <iostream>
using namespace std;
int mayorDeTres(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
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

