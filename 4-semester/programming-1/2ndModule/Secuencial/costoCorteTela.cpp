#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a calcular el valor a pagar por un corte de tela.\n";

	int largo, ancho, metros, precio;

	cout << "Por favor ingrese la cantidad de metros de largo que tendra el corte de tela que ud. va a adquirir: ";
	cin >> largo;

	cout << "Ahora ingrese la cantidad de metros de ancho del corte de tela: ";
	cin >> ancho;

	metros = ancho * largo;

	cout << "Ahora ingrese el precio por metro cuadrado que tiene la tela que usted desea adquirir: ";
	cin >> precio;

	precio *= metros;

	cout << "En total, usted debe pagar " << precio << "Bs. para adquirir " << metros << " cuadrados de esa tela.\n";

	system("pause");
	return 0;
}