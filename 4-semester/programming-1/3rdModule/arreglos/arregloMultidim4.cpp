#include <iostream>

using namespace std;

void Rellenar(int matriz[][4], int columna, int numero) {
    // Esta funcion va a rellenar la columna indicada con multiplos
    // del numero indicado.

    for (int i = 0; i < 4; i++) {
        // Este bucle va a rellenar cada columna. 
        matriz[i][columna] = numero * (i + 3);
    }
}

int main() {
    cout << "Este algoritmo va a crear una matriz 4x4 y va a mostrar el ";
    cout << "promedio de los numeros que se encuentran encima de la ";
    cout << "diagonal principal.\n";

    int matriz[4][4];
    int numero1, numero2, numero3, numero4;
    float promedio, suma;

    suma = 0.0;

    cout << "Por favor ingrese un numero para rellenar la primera columna";
    cout << " con sus multiplos: ";
    cin >> numero1;

    Rellenar(matriz, 0, numero1);
    // Rellenar la columna cero (la primera) de la matriz.

    cout << "Ahora por favor ingrese otro numero para rellenar la segunda";
    cout << " columna con sus multiplos: ";
    cin >> numero2;

    Rellenar(matriz, 1, numero2);
    // Rellenar la columna 1 (la segunda) de la matriz.

    cout << "Por favor, ahora ingrese un tercer numero para rellenar la ";
    cout << "tercera columna con sus multiplos: ";
    cin >> numero3;

    Rellenar(matriz, 2, numero3);
    // Rellenar la columna 2 (la tercera) de la matriz.

    cout << "Por favor, ahora ingrese un ultimo numero para rellenar la ";
    cout << "ultima columna de la matriz: ";
    cin >> numero4;

    Rellenar(matriz, 3, numero4);
    // Rellenar la ultima columna de la matriz.

    cout << "\nLa matriz resultante es: \n\n";

    for (int i = 0; i < 4; i++) {
        // Estos bucles van a mostrar en pantalla la matriz.
        // Y este especificamente se movera entre las filas.

        for (int f = 0; f < 4; f++) {
            // Este bucle se movera entre las columnas para mostrarlas en
            // pantalla.

            if (f == i) {
                // Si el numero de columnas es igual al de filas (es la
                // diagonal principal).

                cout << " |[ " << matriz[i][f] << " ]| ";
                suma += matriz[i][f];
            }
            else {
                cout << "  | " << matriz[i][f] << " |  ";
            }
        }

        cout << endl;
    }

    promedio = suma / 4;

    cout << "\nEl promedio de los numeros que estan en la diagonal principal";
    cout << " es: " << promedio << endl;


    // Para que el programa no se cierre de golpe.
    // como alternativa a system("pause").
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
