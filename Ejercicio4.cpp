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
    char respuesta;
    do{
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
    cout << "Ingrese el valor de z: ";
    cin >> z;
    int mayor = mayorDeTres(x, y, z);
    cout << "El mayor es: " << mayor << endl;
    do{
		cout<<"¿Desea volver a intentar con otros valores? (s/n): ";
    	cin >> respuesta;
    	if (respuesta != 's' and respuesta != 'n'){
    		cout<<"Debe responder solo con (s/n)."<<endl;
		}
	}while(respuesta != 's' and respuesta != 'n');
	}while(respuesta=='s');
}

