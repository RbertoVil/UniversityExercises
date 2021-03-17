#include <iostream>

using namespace std;

float Media(int vector[]) {
    // Dado un vector sacara la media (promedio) de sus numeros.
    float suma, media;
    int contador;
    contador = 0;
    suma = 0.0;

    while (contador < 10) {
        suma += vector[contador];
        contador++;
    }

    media = suma / contador;
    return(media);
}

int main() {
    cout << "Este algoritmo va a recibir 10 valores que se almacenaran en ";
    cout << "un array, despues de almacenar dichos valores se calculara ";
    cout << "la media de esos 10 valores y se mostrara en pantalla.\n";

    int vector[10];
    float media;

    for (int i = 0; i < 10; i++) {
        // Ingresar numeros al array.
        cout << "Por favor ingrese el numero " << i + 1 << ": ";
        cin >> vector[i];
    }

    media = Media(vector);

    cout << "La media de los valores ingresados es " << media << ".\n";

    // Para que el programa no se cierre de golpe.
    // Como alternativa a system("pause").
    cout << "\nPor favor ingrese un cero (0) para salir.\n";
    cout << "Sin los parentesis.\n";
    int salir;
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
