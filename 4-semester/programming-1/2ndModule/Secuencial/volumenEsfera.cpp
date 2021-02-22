#define _USE_MATH_DEFINES // Nuevamente, para usar constantes matemáticas.

#include <iostream>
#include <cmath>	// librería de matemáticas.
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a calcular el volumen de una esfera, pero para ello, necesito que le proporciones el radio de la misma:\n";

	double variablePi, volumenEsfera, radio;

	variablePi = M_PI;
	volumenEsfera = 4.0 / 3.0;

	volumenEsfera *= variablePi;

	cout << "Por favor ingrese el radio de la esfera a la que le deseas calcular el area: ";
	cin >> radio;

	radio = pow(radio, 3); // Elevar el radio al cubo.

	volumenEsfera *= radio;

	cout << "El volumen de la esfera es: " << volumenEsfera << "\n";

	system("pause");
	return 0;
}