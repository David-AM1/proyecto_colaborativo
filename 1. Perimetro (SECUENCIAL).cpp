#include <iostream>
using namespace std;

int main() {
	double perimetro, altura, base;
	cout<<"Ingrese la altura del rectangulo: ";
	cin>>altura;
	cout<<"Ingrese la base del rectangulo: ";
	cin>>base;
	perimetro = (base + altura) * 2;
	cout<< "El perimetro del rectangulo es: "<< perimetro;
	return 0;
}
