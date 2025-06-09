#include <iostream>
using namespace std;
double obtenerPrecioVenta(double precioCompra, double porcentajeGanancia) {
    const double PORCENTAJE_TOTAL = 100.0;
    return precioCompra * (1 + porcentajeGanancia / PORCENTAJE_TOTAL);
}
int main() {
    double precioCompra, porcentajeGanancia, precioVenta;
    char r;
    do{
    	cout << "Ingrese el precio de compra: ";
    	cin >> precioCompra;
    	cout << "Ingrese el porcentaje de ganancia: ";
    	cin >> porcentajeGanancia;
    	precioVenta = obtenerPrecioVenta(precioCompra, porcentajeGanancia);
    	cout << "El precio de venta es: " << precioVenta << endl;
    	cout<<"¿Desea intentar nuevamente con otros datos? (s/n): ";
    	cin>>r;
    	if(r!='s' and r!='n'){
    		cout<<"Respuesta invalida."<<endl;
		}
	}while(r=='s');
    return 0;
}


