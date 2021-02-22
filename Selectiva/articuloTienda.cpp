#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a calcular e imprimir el precio de un articulo, teniendo en cuenta su nombre, clave, precio original y su precio con descuento.\n";
	cout << "Donde el descuento se hace en base a la clave, si la clave es 01 el descuento sera del 10%, y si la clave es 02 el descuento sera del 20% (solo existen esas dos claves).\n";

	float precioBase, precioDescuento, porcntajDscuento;
	string nombreArticulo;
	int clave;

	cout << "Ingrese el nombre del articulo que desea adquirir: ";
	cin >> nombreArticulo;

	cout << "Ingrese el precio original del articulo: ";
	cin >> precioBase;

	cout << "Opciones de claves:\n(01)\n(02)\n(algun otro numero).\n";
	cout << "Ahora ingrese la clave (sin los parentesis): ";
	cin >> clave;

	switch (clave) {
	case 01:
		porcntajDscuento = 10;

		cout << "El articulo '" << nombreArticulo << "' por tener la clave (" << clave << ") tiene un descuento del " << porcntajDscuento << "%.\n";
	
		porcntajDscuento /= 100;
		precioDescuento = porcntajDscuento * precioBase;	// Aqui se obtendra el decuento total (10% del precio base).
		precioDescuento = precioBase - precioDescuento;		// Aqui asignamos el precio de descuento (precio base - descuento).

		cout << "Por lo que, en lugar de valer $" << precioBase << " va a poseer un valor de $" << precioDescuento << "\n";
		break;

	case 02:
		porcntajDscuento = 20;

		cout << "El articulo '" << nombreArticulo << "' por tener la clave (" << clave << ") tiene un descuento del " << porcntajDscuento << "%.\n";

		porcntajDscuento /= 100;
		precioDescuento = porcntajDscuento * precioBase;	// Descuento total (20% del precio base).
		precioDescuento = precioBase - precioDescuento;		// precio base - descuento.

		cout << "Por lo que, en lugar de valer $" << precioBase << " va a poseer un valor de $" << precioDescuento << "\n";
		break;

	default:
		cout << "Lo siento, la clave que acaba de colocar es invalida, por lo que tendra que pagar el precio completo, es decir $" << precioBase << ".\n";
		break;
	}
	system("pause");
	return 0;
}