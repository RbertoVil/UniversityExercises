#include <iostream>

using namespace std;

void Rellenar(int matriz[][4], int columna, int orden, int numero) {
    // Una funcion para rellenar la columna indicada con multiplos
    // de un numero proporcionado.
    int multiplicador;

    for (int i = 0; i < 4; i++) {
        if (orden == 1) {
            // Consideraremos orden = 1 cuando queramos un orden
            // ascendente.
            multiplicador = i + 1;
        }
        else if (orden == -1) {
            // Consideraremos orden = -1 cuando queramos un orden
            // descendente.
            multiplicador = 10 - i;
        }   
        matriz[i][columna] = numero * multiplicador;
    }
}

int main() {
    cout << "Este algoritmo creara una matriz de 4 x 4, luego calculara y ";
    cout << "mostrara en pantalla la suma de todos los numeros que se ";
    cout << "encuentren en la diagonal principal.\n";

    int suma, numero1, numero2, numero3, numero4;
    int matriz[4][4];
    
    suma = 0;

    cout << "Por favor ingrese un numero para rellenar la primera fila con";
    cout << "los multiplos de dicho numero: ";
    cin >> numero1;

    Rellenar(matriz, 0, 1, numero1);
    // Rellenar la columna 1 de la matriz en orden ascendente.

    cout << "Por favor ingrese otro numero para rellenar la segunda fila con";
    cout << "los multiplos de dicho numero: ";
    cin >> numero2;

    Rellenar(matriz, 1, -1, numero2);
    // Rellenar la columna 2 en un orden descendente.

    cout << "Por favor ingrese otro numero para rellenar la tercera fila con";
    cout << "los multiplos de dicho numero: ";
    cin >> numero3;

    Rellenar(matriz, 2, 1, numero3);
    // Rellenar la columna 3 en un orden ascendente.

    cout << "Por favor ingrese otro numero para rellenar la ultima fila con";
    cout << "los multiplos de dicho numero: ";
    cin >> numero4;

    Rellenar(matriz, 3, -1, numero4);
    // Rellenar la columna 4 en un orden descendente.

    
    cout << "La matriz resultante es:\n\n";

    for (int i = 0; i < 4; i++) {
        // Este bucle se movera entre filas.
        for (int f = 0; f < 4; f++) {
            // Este bucle se movera entre columnas para mostrarlas.

            if (f == i) {
                // Si el numero de filas es igual al de columnas.
                // "Pertenece a la diagonal principal".
                cout << " |[ " << matriz[i][f] << " ]| ";

                suma += matriz[i][f]; // Suma estos numeros.
            }
            else {
                cout << "  | " << matriz[i][f] << " |  ";
            }
        }
        cout << endl;
    }

    cout << "\nLa suma de los elementos en la diagonal principal es: ";
    cout << suma << endl;
                                                                                

    // Para que el programa no se cierre de golpe.
    // Como alternativa a system("pause").
    int salir;
    cout << "\nPor favor ingrese el numero cero (0) para salir.\n";
    cout << "Ingrese el cero sin los parentesis.\n";
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
