#include <iostream>
#include <stdlib.h>
#include <cmath>	// Librería de matemáticas.

using namespace std;

int main() {
	cout << "Este programa va a calcular el interes compuesto de un deposito realizado en varios años.\n";

	int tiempo, capitalInicial;
	float tasaInteres, interesCompuesto;

	cout << "Por favor ingrese cuanto va a ser la cantidad inicial de la inversion que Ud. va a hacer: ";
	cin >> capitalInicial;

	cout << "Ahora ingrese la cantidad de tiempo (en años) que durara esa inversion: ";
	cin >> tiempo;

	cout << "Ahora, ingrese cuanto es el porcentaje de la tasa de interes de la inversion (en %, como numero entero y sin incluir el simbolo %): ";
	cin >> tasaInteres;

	tasaInteres /= 100.0;

	tasaInteres += 1.0;

	interesCompuesto = capitalInicial * tasaInteres * tiempo;

	cout << "El valor de su interes compuesto es: " << interesCompuesto << "\n";

	system("pause");
	return 0;
}