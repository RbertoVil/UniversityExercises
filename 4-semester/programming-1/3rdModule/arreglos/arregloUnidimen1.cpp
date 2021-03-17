#include <iostream>

using namespace std;

int main() {
    cout << "Este algoritmo va a almacenar 5 valores que tu porporciones en ";
    cout << "un array, y luego mediante otro bucle los mostrara en pantalla ";
    cout << "en orden.\n";

    int vector[5];

    for (int i = 0; i <= 4; i++) {
        // Ingresar numeros que proporcione el usuario al array.
        cout << "Ingrese el numero " << i + 1 << " del vector: ";
        cin >> vector[i];
    }

    cout << "Los valores que ingresaste fueron.\n";

    for (int i = 0; i <= 4; i++) {
        // Mostrar en pantalla los numeros dentro del array.
        cout << "El valor del numero " << i + 1 << " es: " << vector[i] << endl;
    }

    // Para que el programa no se cierre de golpe.
    // Como alternativa a system("pause").
    int salir;
    cout << "\nPor favor ingrese un cero (0) para salir.\n";
    cout << "Ingrese el (0) pero sin los parentesis.\n";
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
