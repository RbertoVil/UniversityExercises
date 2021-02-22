#define _USE_MATH_DEFINES // Para usar constantes matemáticas.

#include <iostream>
#include <cmath>	// librería de matemáticas.
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a calcular el volumen de un cono, sin embargo, necesito que le proporciones el radio y la altura del mismo:\n";

	double altura, radio, variablePi, volumen;

	variablePi = M_PI;
	volumen = 1.0 / 3.0;
	volumen *= variablePi;

	cout << "Por favor ingrese el radio: ";
	cin >> radio;

	radio = pow(radio, 2); // Estamos elevando el radio al cuadrado.

	cout << "Por favor ingrese la altura del cono: ";
	cin >> altura;

	volumen = volumen * radio * altura;

	cout << "El volumen del cono es: " << volumen << "\n";

	system("pause");
	return 0;
}