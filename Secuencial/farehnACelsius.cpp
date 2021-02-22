#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a convertir grados Farehnheit a Celsius\n";

	float celsius, farehnheit;

	cout << "Por favor ingrese la cantidad de grados Farehnheit: ";
	cin >> farehnheit;

	celsius = farehnheit - 32;

	celsius = celsius * (5.0 / 9.0);

	cout << "La cantidad de grados Celsius son: " << celsius << "\n";

	system("pause");
	return 0;
}