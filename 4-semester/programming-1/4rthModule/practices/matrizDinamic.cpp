#include <iostream>
#include <cmath>
#include <deque>

using namespace std;

int main() {
    int rows = 1;
    int columns = 1;

    int maxColumns = 7;
    int maxRows = 5

    int contador = 1;
    int posNumber = 0;
    float numero, multiplo;

    deque <float> matriz (rows * columns);

    for (int i = 1; i <= 5; i++) {
        // Este bucle controlará el número de filas.
        switch (contador) {
            // Dependiendo del número de fila, el numero será
            // diferente.
            case 1:
                numero = 32;
                multiplo = 2.1;
                break;
            case 2:
                numero = 17;
                multiplo = 1.3;
                break;
            case 3:
                numero = 51;
                multiplo = 1.7;
                break;
            case 4:
                numero = 23;
                multiplo = 3.2;
                break;
            case 5:
                numero = 9;
                multiplo = 1.5;
                break;
        }
        for (int f = 1; f <= 6; f++) {
            // Este bucle controlará el numero de columnas.
            numero = numero * multiplo;

            if (contador == 1) {
                posicionFilas = 0;
            }
            if (f == 1) {
                // Si esla primera columna;
                posicionColumnas = 0;
            }
            else {
                // Si no es la primera columna
                posicionColumnas += 1;
                if (posicionColumnas >= *columnas) {
                    *columnas += 1;
                }
            }
            matriz[posicionFilas][posicionColumnas] = numero;
            cout << " | " << numero << " | ";
        }
        posicionFilas += 1;
        *filas += 1;
        contador++;
        cout << endl;
    }

    cout << "\nEl numero de filas es: " << *filas << endl;
    cout << "\nEl numero de columnas es: " << *columnas <<endl;

    // Algo anda mal, no almacena bien los elementos.

    for (int i = 0; i < *filas; i++) {
        // Para mostrar las filas.
        for (int f = 0; f < *columnas; f++) {
            cout << " | " << matriz[i][f] << " | ";
        }
        cout << endl;
    }

    // Para evitar que el programa se cierre solo.
    // Como alternativa a system("pause").
    int salir;
    cout << "\n\nPor favor ingrese un cero para salir.\n";
    cout << "Ingrese el cero sin los parentesis.\n";
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
