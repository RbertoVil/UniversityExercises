#include <iostream>
#include <stdlib.h>

using namespace std;

// Variables Globales.
bool encontrado;


// Funciones.
bool Comparar(int numero, int *array, int tamanoArray) {
    // Esta funcion va a comparar si algun numero se encuentra en un array.
    for (int i = 0; i < tamanoArray; i++) {
        if (numero == array[i]) {
            // Si el numero se encuentra en el array (numero es igual a un
            // valor dentro del array).
            encontrado = true;
            break;
        }
        else {
            encontrado = false;
        }
    }
    return(encontrado);
}

void BuscaMultiplo(int numero, int *array, int &tamanoArray) {
    // Esta funcion buscara los multiplos del numero dado para almacenarlos
    // como numeros compuestos.
    int multiplo, indice;
    int i = numero + 1;
    // Esta linea evita que se almacene el propio numero dentro del array de
    // los nros compuestos.

    for (i; i < 100; i++) {
        multiplo = i % numero;
        if (multiplo == 0) {
            indice = tamanoArray - 1;

            array[indice] = i;

            tamanoArray += 1;
        }
        else {
            continue;
        }
    }
}


int main() {
    cout << "Este algoritmo va a rellenar una matriz de 4x4 con los primeros ";
    cout << "16 numeros primos. La carga de los numeros se realizara de ";
    cout << "manera dinamica.\n";
    cout << "\n\nLa manera de encontrar los numeros primos de este algoritmo ";
    cout << "sera mediante la criba de Eratostenes. La cual consiste en 4 ";
    cout << "pasos: \n\n";
    cout << "1. El primer paso es listar los numeros naturales entre 2 hasta ";
    cout << "el numero que se desee.\n";
    cout << "2. El siguiente paso es tomar un numero no rayado ni marcado, ";
    cout << "como primo.\n";
    cout << "3. Se tachan todos los multiplos del numero que se acaba de ";
    cout << "indicar como primo.\n";
    cout << "4. Si el cuadrado del siguiente numero no tachado ni marcado ";
    cout << "es inferior al numero que se decidio como maximo en el primer";
    cout << " paso. Entonces se repite el segundo paso. Si no, el algoritmo";
    cout << " temina, y todos los enteros no tachados son declarados primos.\n";
    cout << endl;

    bool encontradoComp;
    int numero, contador;
    int tamanoPrimos, primoGuardar;
    int tamanoComp;

    int *nroCompuestos, *nroPrimos;
    int matrizFinal[4][4];

    // Tamano de las listas de nros primos y compuestos.
    tamanoPrimos = 0;
    tamanoComp = 1;

    // Asignación de apuntadores.
    nroPrimos = new int[tamanoPrimos];
    nroCompuestos = new int[tamanoComp];

    // Primero vamos a buscar todos los numeros compuestos con el siguiente
    // bucle.

    for (int i = 2; i < 100; i++) {
        // Este bucle va a almacenar todos los numeros compuestos en un array.

        encontradoComp = Comparar(i, nroCompuestos, tamanoComp);

        if (encontradoComp == true) {
            // Este condicional busca si "i" ya es compuesto, de ser asi,
            // lo evita y cambia al siguiente numero.
            continue;
        }
        else {
            BuscaMultiplo(i, nroCompuestos, tamanoComp);
            // Va a agregar todos los multiplos de "i" en el array de
            // numeros compuestos.            
        }
    }

    numero = 2;
    // Esta variable es para buscar los numeros primos, debemos empezar por el
    // 2 porque el 1 por convencion no es ni primo ni compuesto.

    contador = 1;

    while (contador <= 16) {
        // Este bucle va a almacenar los primeros 16 numeros primos en un array
        // dinamico.

        encontradoComp = Comparar(numero, nroCompuestos, tamanoComp);
        // Aqui se compara si el numero esta en el array de los numeros
        // compuestos.

        if (encontradoComp == true) {
            // Si el numero es un compuesto lo ignora.
            numero += 1;
            continue;
        }
        else {
            primoGuardar = contador - 1;
            // Este sera el indice para guardar los primos en un array.
            nroPrimos[primoGuardar] = numero;

            tamanoPrimos += 1;
            contador++;

            numero += 1;
        }
    }

    contador = 0; // Reasignamos la variable para rellenar nuestra matriz.

    for (int i = 0; i < 4; i++) {
        // Estos bucles son para rellenar la matrizFinal.
        // Y este especificamente va a rellenar las filas.
        for (int f = 0; f < 4; f++) {
            // Este bucle va a rellenar las columnas.
            matrizFinal[i][f] = nroPrimos[contador];

            cout << " [ " << matrizFinal[i][f] << " ] ";

            contador += 1;
        }
        cout << endl;
    }


    // Para que el programa no se cierre de golpe.
    // Como alternativa a system("pause")
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
