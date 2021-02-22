#define _USE_MATH_DEFINES // Para usar constantes matemáticas.

#include <iostream>
#include <cmath>	// Librería de matemáticas
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a calcular el volumen de un cubo\n";

	double lado, volumen;

	cout << "Por favor, provea el valor de algun lado del cubo: ";
	cin >> lado;

	volumen = pow(lado, 3); // Elevando el valor de "lado" al cubo.

	cout << "El volumen del cubo es: " << volumen << "\n";

	system("pause");
	return 0;
}