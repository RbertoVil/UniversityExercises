#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa se encarga de calcular el total a pagar de un cliente por su compra en un almacen, teniendo en cuenta que si el cliente realiza una compra con un valor mayor a $1000 tendra un 20% de descuento.\n";

	double valorMercancia, descuento, cantidadPagar;

	cout << "Ingrese el valor de la compra del cliente: ";
	cin >> valorMercancia;

	if (valorMercancia >= 1000) {
		descuento = (20.0 / 100.0) * valorMercancia;

		cout << "El valor del descuento es: " << descuento << "\n";
	
		cantidadPagar = valorMercancia - descuento;

		cout << "El total a pagar de este cliente sera: $" << cantidadPagar << "\n";
	}
	else {
		cout << "Este cliente no tiene acceso al descuento.\n";
		cout << "El total a pagar de este cliente sera: $" << valorMercancia << "\n";
	}

	system("pause");
	return 0;
}