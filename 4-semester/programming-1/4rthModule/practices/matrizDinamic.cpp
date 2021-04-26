#include <iostream>
#include <cmath>
#include <deque>

using namespace std;

int main() {
    // Este algoritmo creará una falsa matriz n * m utilizando un único deque.
    // Inicializamos las filas y columnas en 1.
    int rows = 1;
    int columns = 1;

    // Establecemos el máximo de filas y columnas.
    int maxColumns = 7;
    int maxRows = 5;

    int contador = 1;
    int posNumber = 0;

    // numero y multiplo es para crear números cualesquiera para rellenar
    // nuestra falsa matriz.
    float numero, multiplo;

    deque <float> matriz (rows * columns);

    for (int i = 0; i < maxRows; i++) {
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
        for (int f = 0; f < maxColumns; f++) {
            // Este bucle controlará el numero de columnas.
            // Aumentamos el tamaño de nuestro deque para ocupar lo suficiente
            // para tener todos los datos de nuestra matriz.
            matriz.resize(rows * columns);
            numero = numero * multiplo;

            if (contador == 1 && f < (maxColumns - 1)) {
                // Mientas que es la primera fila y el f es menor al numero máximo de
                // columnas, aumentamos el numero de columnas.
                columns += 1;
            }

            // Guardamos el numero en nuestro deque y aumentamos la variable
            // auxiliar para almacenar numeros.
            matriz[posNumber] = numero;
            posNumber += 1;
            cout << " | " << numero << " | ";
        }
        if (i < (maxRows - 1)) {
            // Mientras que i sea menor al número máximo de filas aumentamos el
            // número de filas.
            rows += 1;
        }
        contador++;
        cout << endl;
    }

    cout << "\nEl numero de filas es: " << rows << endl;
    cout << "\nEl numero de columnas es: " << columns <<endl;
    cout << "\nEl tamano de nuestro deque es: " << matriz.size() << "\n\n";

    // Mostrar mis datos en forma de matriz.

    for (int i = 0; i < rows; i++) {
        // Para mostrar las filas.
        for (int f = 0; f < columns; f++) {
            cout << " | " << matriz[i * columns + f] << " | ";
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

// Información interesante para echar un vistazo y aprender.
// Read: https://stackoverflow.com/questions/4029870/how-to-create-a-dynamic-array-of-integers
// https://www.youtube.com/watch?v=i7cgXSfNhAQ
// https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new
// https://stackoverflow.com/questions/29375797/copy-2d-array-using-memcpy/29375830#29375830


// https://stackoverflow.com/questions/36142627/c-push-back-2d-deque
