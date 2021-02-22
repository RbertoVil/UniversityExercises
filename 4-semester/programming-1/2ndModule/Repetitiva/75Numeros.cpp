#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este algoritmo tendra la siguiente tarea: Dado 75 numeros (diferentes de cero), va a realizar un algoritmo que permita determinar y dar como salida: \n";
	cout << "- El numero mayor y el numero menor encontrado en el grupo.\n";
	cout << "- Cantidad de numeros mayores a 150.\n";
	cout << "- Cantidad de numeros negativos encontrados.\n";
	cout << "- Promedio de los numeros positivos encontrados.\n";

	float numero, nroMenor, nroMayor, nrosMayor150, nrosNegativ, nrosPositiv, promedioPositiv;

	nrosNegativ = 0;		// Contador de nros negativos.
	nrosPositiv = 0;		// Contador de nros positivos.
	nrosMayor150 = 0;		// Contador de nros mayores a 150.
	promedioPositiv = 0;	// Para sacar el promedio de los nros positivos.

	for (int contador = 1; contador <= 75; contador++) {
		cout << "Por favor ingrese el numero " << contador << " (recuerde que debe ser diferente de cero '0'): ";
		cin >> numero;

		if (numero == 0) {
			cout << "\nEl numero 0 no es valido, por favor ingrese otro que sea diferente de cero.\n";
			contador--;
		}
		else {
			
			if (contador == 1) {
				// Si es el primer numero ingresado, este se asignara a las variables nroMenor y nroMayor.
				nroMenor = numero;
				nroMayor = numero;
			}
			else {
				// Si no es el primer numero ingresado.

				if (numero < nroMenor) {
					// Si numero es menor que nroMenor, se asignara el nro ingresado a esta variable.
					nroMenor = numero;
				}
				else if (numero > nroMayor) {
					// Si numero es mayor que nroMayor, se asignara el nro ingresado a esta variable.
					nroMayor = numero;
				}
			}

			// Ahora, independientemente si es el primer nro ingresado o no.
			
			if (numero < 0) {
				// Se verificara si es negativo.
				nrosNegativ += 1;
			}
			else if (numero > 0) {
				// Se verificara si es positivo.
				nrosPositiv += 1;
				promedioPositiv += numero;

				if (numero > 150) {
					// Si es positivo se verificara si es mayor a 150.
					nrosMayor150 += 1;
				}
			}
		}
	}

	promedioPositiv /= nrosPositiv;

	cout << "El numero menor es: " << nroMenor << ".\n";
	cout << "El numero mayor es: " << nroMayor << ".\n";
	cout << "El total de numeros negativos es: " << nrosNegativ << ".\n";
	cout << "El total de numeros positivos es: " << nrosPositiv << ".\n";
	cout << "El total de numeros mayores a 150 es: " << nrosMayor150 << ".\n";
	cout << "Y el promedio de los numeros positivos es: " << promedioPositiv << ".\n";
	
	system("pause");
	return 0;
}