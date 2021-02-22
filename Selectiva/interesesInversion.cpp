#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	float tasaInteres, interes, cantidadInicial, tiempo, cantidadTotal, inversion;
	int contador = 1;

	cout << "Este programa va a calcular cuanto dinero se genera por concepto de intereses sobre una cantidad invertida en el banco.\n";
	cout << "Además, este programa reinvertira su dinero mas sus intereses si y solo si el interes supera los $7000\n";
	cout << "Por favor ingrese la cantidad de dinero que ud. invirtio inicialmente: ";
	cin >> cantidadInicial;

	cout << "Ahora ingrese el porcentaje de la tasa de interes anual: ";
	cin >> tasaInteres;

	cout << "Ahora ingrese la cantidad de tiempo que tiene la inversion (en anos): ";
	cin >> tiempo;

	do {
		cout << "A una tasa de interes del " << tasaInteres << "% en " << tiempo << " anos.\n";
		
		interes = (tasaInteres / 100.0) * cantidadInicial;
		interes *= tiempo;
		cantidadTotal = interes + cantidadInicial;

		cout << "Se genero un interes de: $" << interes << "\n";

		if (interes >= 7000) {
			if (contador == 1) {
			
				cout << "Ok, reinvirtiremos esos intereses, porque superan los $7000\n";
				cout << "Ahora tendras invertidos: $" << cantidadTotal << " (intereses + capital inicial)\n";
				cout << "¿Cuantos años dejaras esta nueva inversion? ";
				cin >> tiempo; // Aqui se almacenará la nueva cantidad de tiempo (en años).

				cantidadInicial = cantidadTotal; // La cantidad total ahora pasará a ser nuestra cantidad inicial.
			}
			else if (contador == 2){		
				cout << "Ahora, en esta segunda ronda de inversion tendras un total de: $" << cantidadTotal << " en tu cuenta bancaria.\n";
			}
			else {}

			contador += 1;
		}
		else {
			cout << "Tus itereses son: $" << interes << "\n";
			cout << "Lamentamos comentarle que, como tus intereses no superan los $7000 no se te permitirá reinvertir.\n";
			cout << "Por lo que el dinero disponible finalemente en tu cuenta es de: $" << cantidadTotal << "\n";
			break;
		};
	} while (contador <= 2);

	system("pause");
	return 0;
}