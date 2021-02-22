#define _USE_MATH_DEFINES // Esta linea es importante para acceder a las constantes matemáticas.

#include <iostream>
#include <stdlib.h>
#include <math.h> // Importar la librería de matemáticas de C.

using namespace std;

int main() {
	cout << "Este programa se encarga de calcular el area de un circulo, sin embargo necesito que le proporciones el radio: \n";

	double variablePi, radioCirculo;

	variablePi = M_PI;

	cout << "Por favor ingrese el radio del circulo al que le deseas calcular el area: ";
	cin >> radioCirculo;

	radioCirculo = pow(radioCirculo, 2); // Pow es la funcion para usar potencias.
	// En este caso estamos elevanto el valor de radioCirculo al cuadrado.

	radioCirculo *= variablePi;

	cout << "El area del circulo es " << radioCirculo << "\n";

	system("pause");
	return 0;
}