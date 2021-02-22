#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a calcular el area de un rectángulo, pero necesito que le proporciones la base y la altura del mismo.\n";

	double base, altura, area;

	cout << "Por favor, digame la base del rectangulo: ";
	cin >> base;

	cout << "Ahora, por favor digame la altura: ";
	cin >> altura;

	area = base * altura;

	cout << "El area del rectangulo es: " << area << "\n";

	system("pause");
	return 0;
}