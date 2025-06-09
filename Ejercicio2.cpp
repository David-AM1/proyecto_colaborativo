#include <iostream>
using namespace std;
char numeroAVocal(int numero) {
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    if (numero >= 1 && numero <= 5) {
        return vocales[numero - 1];  
    } else {
        return '?';  
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

