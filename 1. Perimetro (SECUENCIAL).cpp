#include <iostream>
using namespace std;

int main() {
	double perimetro, altura, base;
	do{
		cout<<"Ingrese la altura del rectangulo: ";
		cin>>altura;
		if(altura<=0){
			cout<<"Numero invalido. Vuelva a intentar."<<endl;
		}
	}while(altura<=0);
	do{
		cout<<"Ingrese la base del rectangulo: ";
		cin>>base;
		if(base<=0){
			cout<<"Numero invalido. Vuelva a intentar."<<endl;
		}
	}while(base<=0);
	perimetro = (base + altura) * 2;
	cout<< "El perimetro del rectangulo es: "<< perimetro;
	return 0;
}
