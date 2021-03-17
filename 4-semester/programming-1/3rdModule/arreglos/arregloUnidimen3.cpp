#include <iostream>

using namespace std;

void Rellenar(int vector[], int tamano, int multiplo) {
    // Esta funcion se encargara de rellenar el vector con los multiplos
    // de un numero dado (en la variable multiplo).
    for (int i = 0; i < tamano; i++) {
        vector[i] = multiplo * (i + 1);
    }
}

void Imprimir(int vector[], int tamano) {
    // Esta funcion va a imprimir en pantalla los elementos del vector.
    for (int i = 0; i < tamano; i++) {
        cout << "El elemento " << i + 1 << " del vector es: ";
        cout << vector[i] << endl;
    }
}

int main() {
    cout << "Este algoritmo tiene la funcion de crear un array unidimensional";
    cout << " donde el tamano del mismo sera ingresado por teclado.\n";
    cout << "Ademas de eso, debe tener una funcion que rellene dicho array ";
    cout << "con los multiplos de un numero pedido por teclado. Una vez que ";
    cout << "el array tenga los datos, estos se mostraran en pantalla.\n";

    int vector[tamano];
    int tamano, multiplo;

    cout << "\nPor favor ingrese el numero de elementos que tendra el array: ";
    cin >> tamano;

    cout << "Ahora por favor ingrese un numero, el cual se usara para ";
    cout << "rellenar el array con sus multiplos: ";
    cin >> multiplo;

    Rellenar(vector, tamano, multiplo);

    Imprimir(vector, tamano);

    // Para evitar que el programa se cierre de golpe.
    // Como alternativa a system("pause").
    int salir;
    cout << "\nPor favor escriba el cero (0) para salir.\n";
    cout << "Escriba el cero sin los parentesis.\n";
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
