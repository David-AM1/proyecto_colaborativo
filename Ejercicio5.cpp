#include <iostream>
using namespace std;
double obtenerPrecioVenta(double precioCompra, double porcentajeGanancia) {
    const double PORCENTAJE_TOTAL = 100.0;
    return precioCompra * (1 + porcentajeGanancia / PORCENTAJE_TOTAL);
}
int main() {
    double precioCompra, porcentajeGanancia;
    cout << "Ingrese el precio de compra: ";
    cin >> precioCompra;
    cout << "Ingrese el porcentaje de ganancia: ";
    cin >> porcentajeGanancia;
    double precioVenta = obtenerPrecioVenta(precioCompra, porcentajeGanancia);
    cout << "El precio de venta es: " << precioVenta << endl;
    return 0;
}


