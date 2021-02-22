#include <iostream>
#include <stdlib.h>

using namespace std;

float Porcentaje(float porcentaje, int nroBase) {
	// Esta funcion se encargara de calcular el porcentaje de un cierto precio (o valor).

	porcentaje /= 100.0;
	porcentaje *= nroBase;
	return(porcentaje);
}

int main() {
	cout << "Este algoritmo va a calcular la forma de pago de una compra de varias piezas de la misma clase de una empresa a una fabrica de refracciones.\n";
	cout << "Dependiendo del monto de total de la compra, la empresa decidira que hacer para pagar al fabricante.\n";
	cout << "Si el monto total de la compra excede $500.000, la empresa tendra la capacidad de invertir de su propio dinero un 55% del monto de compra, pedir prestado al banco un 30% y el resto lo pagara solicitando un credito al fabricante.\n";
	cout << "Si el monto de compra no excede los $500.000, la empresa tendra capacidad de invertir de su propio dinero un 70% y el 30% restante lo pagara solicitando credito a fabricante.\n";
	cout << "Debemos tener en cuenta que el fabricante cobra por conceptos de intereses un 20% sobre la cantidad que se le pague a credito.\n";

	int montoCompra;
	float inversion, interesesFab, prestamoBanco, creditoFabricante;

	cout << "Por favor ingrese el valor de la compra: ";
	cin >> montoCompra;

	if (montoCompra > 500000) {
		inversion = Porcentaje(55, montoCompra);
		prestamoBanco = Porcentaje(30, montoCompra);
	
		creditoFabricante = montoCompra - inversion;
		creditoFabricante -= prestamoBanco;
	
		cout << "El banco hara un prestamo a la empresa de $" << prestamoBanco << "\n";
	}
	else {
		inversion = Porcentaje(70, montoCompra);
		creditoFabricante = Porcentaje(30, montoCompra);
	}

	interesesFab = Porcentaje(20, creditoFabricante);

	cout << "La empresa va a invertir un total de $" << inversion << "\n";
	cout << "Ademas, la empresa solicitara un credito al fabricante para pagar $" << creditoFabricante << "\n";
	cout << "Aparte de eso, el fabricante cobrara un total de $" << interesesFab << " por concepto de interes, por pagarle a credito.\n";

	system("pause");
	return 0;
}