#include <iostream>

using namespace std;

int main() {
    cout << "Este algoritmo creara una tabla de multiplicar de numero leido ";
    cout << "por teclado y el resultado (la tabla) se debe almacenar en una ";
    cout << "matriz.\n";

    int numero;
    int tabla[10][3];

    cout << "Por favor ingrese un numero para sacar su tabla: ";
    cin >> numero;

    cout << "La tabla de multiplicar de dicho numero es:\n";

    for (int i = 0; i < 10; i++) {
        // Estos 2 bucles son para rellenar la matriz y al final va a
        // imprimir la tabla de multiplicar en pantalla.

        // Y este bucle especificamente se movera entre las filas.
        for (int f = 0; f < 3; f++) {
            // Este bucle se movera entre las columnas.
            // Y asignara el valor correspondiente dependiendo de la columna.

            if (f == 0) {
                tabla[i][f] = numero;
            }
            else if (f == 1) {
                tabla[i][f] = i + 1;
            }
            else {
                tabla[i][f] = numero * (i + 1);
            }
        }
        cout << tabla[i][0] << " * " << tabla[i][1] << " = " << tabla[i][2];
        cout << endl;
    }


    // Para que el programa no se cierre de golpe.
    // Como alternativa a system("pause").
    int salir;
    cout << "\nPor favor ingrese en cero (0) para salir.\n";
    cout << "Ingrese el cero sin los parentesis.\n";
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
