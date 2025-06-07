#include <iostream>
using namespace std;

int vocal(int n) {
	char x;
	switch (n) {
		case 1:
			x = 'a';
			break;
		case 2:
			x = 'e';
			break;
		case 3:
			x = 'i';
			break;
		case 4:
			x = 'o';
			break;
		case 5:
			x = 'u';
			break;
	}
	return x;
}
int main () {
	int num;
	char v;
	do{
		cout << "Ingrese un numero del 1 al 5: ";
		cin >> num;
		v = vocal(num);
		if (num>=1 & num<=5) {
			cout << v;
		} else {
		cout << "Debe ingresar un numero del 1 al 5. Intente nuevamente."<<endl;
		}
	}while(num<1 or num>5);
}