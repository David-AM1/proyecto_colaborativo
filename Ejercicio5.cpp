#include <iostream>
using namespace std;
double calcularPrecioVenta(double precioCompra, double porcentajeGanancia) {
    return precioCompra * (1 + porcentajeGanancia / 100.0);
}
int main() {
    double precioCompra, porcentajeGanancia;
    cout << "Ingrese el precio de compra: ";
    cin >> precioCompra;
    cout << "Ingrese el porcentaje de ganancia: ";
    cin >> porcentajeGanancia;
    double precioVenta = calcularPrecioVenta(precioCompra, porcentajeGanancia);
    cout << "El precio de venta es: " << precioVenta << endl;
    return 0;
}

