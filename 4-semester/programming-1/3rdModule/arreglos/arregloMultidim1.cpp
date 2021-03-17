#include <iostream>

using namespace std;

void Rellenar(int matrizUsar[][3], int columna, int numero, int orden) {
    // Esta funcion va a rellenar la columna de la matriz que se le indique.

    int contador = 0;
    int multiplicador, suma;

    if (columna == 0 || columna == 1) {
        // Si es la primera o la segunda columna.

        while (contador < 10) {
            if (orden == 1) {
                // Vamos a colocar orden = 1 cuando queramos que el orden
                // sea ascendente.
                multiplicador = contador + 1;
            }
            else if (orden == -1) {
                // Vamos a colocar orden = -1 cuando queramos que el orden
                // sea descendente.
                multiplicador = 10 - contador;
            }

            matrizUsar[contador][columna] = numero * multiplicador;
            // El indice "contador" va a representar las filas.

            contador++;
        }
    }
    else if (columna == 2) {
        // Si es la tercera columna.

        while (contador < 10) {
            suma = matrizUsar[contador][0] + matrizUsar[contador][1];

            matrizUsar[contador][columna] = suma;

            contador++;
        }
    }
}

int main() {
    cout << "Este algoritmo creara un array multidimensional que contiene 3";
    cout << " columnas y contendra 10 filas, las dos primeras columnas tendran";
    cout << " numeros y en la tercera columna estara el resultado de sumar el ";
    cout << "numero de la primera columna con el de la segunda.\n";

    int suma, resultado, numero1, numero2;
    int matriz[10][3];

    cout << "Por favor ingrese un numero para rellenar la primera columna con";
    cout << " sus multiplos: ";
    cin >> numero1;

    Rellenar(matriz, 0, numero1, 1);
    // Rellenar la primera columna.

    cout << "Ahora ingrese un segundo numero, para rellenar la segunda columna";
    cout << " con sus multiplos pero en orden inverso: ";
    cin >> numero2;

    Rellenar(matriz, 1, numero2, -1);
    // Rellenar la segunda columna.

    Rellenar(matriz, 2, 0, 0);
    // Rellenar la tercera columna. Al no necesitar que se ingrese un numero
    // para rellenarse, colocaremos numero = 0. Lo mismo ocurre con el orden,
    // al no ser necesario lo igualamos a 0.
    
    cout << "Nuestra matriz queda como:\n";

    for (int i = 0; i < 10; i++) {
        // Este bucle es para imprimir los numeros en pantalla.

        cout << matriz[i][0] << " + " << matriz[i][1] << " = " << matriz[i][2];
        cout << endl;
    }

    // Para evitar que el programa se cierre solo.
    // Como alternativa a system("pause").
    int salir;
    cout << "\nPor favor ingrese un cero (0) para salir.\n";
    cout << "Ingrese el cero sin los parentesis.\n";
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
