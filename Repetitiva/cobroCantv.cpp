#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este algoritmo sirve como apoyo a CANTV, que tiene dos tipos de clientes (residencial y empresarial), este algoritmo va a procesar 'n' cantidad de clientes, teniendo como datos por cada cliente (el codigo del cliente, tipo de cliente, lectura actual, lectura anterior).\n";
	cout << "Con esos datos, este algoritmo va a calcular y dar como salida la cantidad de impulsos consumidos y el neto a pagar por cada cliente.\n";
	cout << "Algo a tener en cuenta es que la cantidad de impulsos consumidos es (lectura actual - lectura anterior).\n";
	cout << "Ademas, los impulsos se cobran a razon de:\n- Residencial 25 Bs.\n- Empresarial 35 Bs.\n";

	string tipoCliente;
	int codigoCliente, lecturaActual, lecturaAnterior, cantidadClientes;
	int contador, impulsosConsum, precioImpulso;
	float totalPagar;

	contador = 1;

	cout << "Por favor ingrese la cantidad de clientes que tiene: ";
	cin >> cantidadClientes;

	while (cantidadClientes != 0) {
		cout << "\nAhora ingrese los siguientes datos para el cliente numero: " << contador << "\n";

		cout << "Ingrese el 'codigo del cliente': ";
		cin >> codigoCliente;

		cout << "Ingrese la 'lectura actual': ";
		cin >> lecturaActual;

		cout << "Ahora ingrese la 'lectura anterior': ";
		cin >> lecturaAnterior;

		impulsosConsum = lecturaActual - lecturaAnterior;

		while (true) {
			// Este bucle es para elegir el tipo de cliente correcto.
		
			cout << "Ahora ingrese el tipo de cliente:\n - si es empresarial coloce (e)\n - si es residencial coloque (r).\nPor favor no coloque los parentesis: ";
			cin >> tipoCliente;

			if (tipoCliente == "e") {
				precioImpulso = 35;
				break;
			}
			else if (tipoCliente == "r") {
				precioImpulso = 25;
				break;
			}
			else {
				cout << "\nEl valor ingresado es invalido, por favor ingrese uno valido.\n";
				cout << "Los valores validos son (e) y (r), sin los parentesis.\n\n";
				continue;
			}
		}

		totalPagar = precioImpulso * impulsosConsum;
		cantidadClientes--;
		contador++;
		
		cout << "Este cliente de codigo (" << codigoCliente << ").\n";
		cout << "Tiene un total de impulsos consumidos de: " << impulsosConsum << ".\n";
		cout << "Por lo que va a pagar un total de " << totalPagar << " Bs.\n";
	}
	system("pause");
	return 0;
}