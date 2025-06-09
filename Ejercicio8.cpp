#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; i++) {
        b = b + a;
        a = b - a;
    }
    return b;
}
int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    int resultado = fibonacci(n);
    cout << "El numero de Fibonacci en la posicion " << n << " es: " << resultado << endl;
    return 0;
}

