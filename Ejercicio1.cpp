#include <iostream>
using namespace std;
int calcularCalificacionFinal(int conocimiento, int desempeno, int producto) {
    int aporteConocimiento = conocimiento * 40 / 100;
    int aporteDesempeno = desempeno * 35 / 100;
    int aporteProducto = producto * 25 / 100;
    int calificacionFinal = aporteConocimiento + aporteDesempeno + aporteProducto;
    return calificacionFinal;
}
int main() {
    int evidenciaConocimiento, evidenciaDesempeno, evidenciaProducto;
    cout << "Ingrese la calificacion de Evidencia de Conocimiento: ";
    cin >> evidenciaConocimiento;
    cout << "Ingrese la calificacion de Evidencia de Desempeno: ";
    cin >> evidenciaDesempeno;
    cout << "Ingrese la calificacion de Evidencia de Producto: ";
    cin >> evidenciaProducto;
    int calificacionFinal = calcularCalificacionFinal(evidenciaConocimiento, evidenciaDesempeno, evidenciaProducto);
    cout << "La calificacion final es: " << calificacionFinal << endl;
    return 0;
}

