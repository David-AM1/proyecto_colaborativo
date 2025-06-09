#include <iostream>
using namespace std;
char numeroAVocal(int numero) {
    switch (numero) {
        case 1: return 'a';
        case 2: return 'e';
        case 3: return 'i';
        case 4: return 'o';
        case 5: return 'u';
        default: return '?'; 
    }
}
int main() {
    int numero;
    cout << "Ingrese un numero (1-5): ";
    cin >> numero;
    char vocal = numeroAVocal(numero);
    if (vocal != '?') {
        cout << "La vocal correspondiente es: " << vocal << endl;
    } else {
        cout << "Numero invalido. Debe ser un numero del 1 al 5." << endl;
    }
    return 0;
}

