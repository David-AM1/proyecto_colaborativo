#include <iostream>
using namespace std;

double limiteCredito(int a, double b) {
	switch (a) {
		case 1:
			b = b * 1.25;
			break;
		case 2:
			b = b * 1.35;
			break;
		case 3:
			b = b * 1.4;
			break;
		default:
			b = b * 1.5;
			break;
	}
	return b;
}

int main () {
	double tipo, credito_actual, nuevo_credito;
	cout << "Ingrese el tipo de tarjeta: ";
	cin >> tipo;
	cout << "Ingrese el limite de credito actual: ";
	cin >> credito_actual;
	nuevo_credito = limiteCredito(tipo,credito_actual);
	cout <<"El nuevo limite de credito es: " << nuevo_credito;
	return 0;
}
