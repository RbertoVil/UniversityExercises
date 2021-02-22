#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a calcular el total a pagar por la compra de camisas.\n";
	cout << "Si usted adquiere tres camisas o mas, obtendra un descuento del 20%, sin embargo, si adquiere menos de tres camisas su descuento sera del 10%\n";

	float precioCamisa, descuento, precioPagar;
	int nroCamisas;

	cout << "Por favor ingrese el precio de las camisas (ingrese el precio por unidad): ";
	cin >> precioCamisa;

	cout << "Por favor ingrese el numero de camisas que va a adquirir: ";
	cin >> nroCamisas;

	precioCamisa *= nroCamisas;

	if (nroCamisas < 3) {
		cout << "Usted obtendrá un descuento del 10%.\n";
		descuento = 10.0 / 100.0;
		descuento *= precioCamisa;
	}
	else {
		cout << "Usted obtendrá un descuento del 20%.\n";
		descuento = 20.0 / 100.0;
		descuento *= precioCamisa;
	}
	
	cout << "Por lo que su descuento sera de: $" << descuento << ".\n";

	precioPagar = precioCamisa - descuento;

	cout << "Y el total que usted debera pagar es: $" << precioPagar << ".\n";

	system("pause");
	return 0;
}