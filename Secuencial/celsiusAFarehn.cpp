#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a convertir grados Celsius a Farehnheit\n";

	float celsius, farehnheit;

	cout << "Ingrese la cantidad de grados celsius: ";
	cin >> celsius;

	farehnheit = celsius * (9.0 / 5.0);
	farehnheit += 32;

	cout << "La cantidad en grados Farehnheit son: " << farehnheit << "\n";

	system("pause");
	return 0;
}