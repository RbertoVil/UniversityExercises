#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa va a calcular el salario semanal de un obrero, teniendo en cuenta lo siguiente:\n";
	cout << "Si trabaja 40 horas o menos se le va a pagar $16 por hora.\n";
	cout << "Si trabaja mas de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 por cada hora extra.\n";

	int horasTrabj, salarioMedio, horasExtras, pagaHorasExtras, paga;

	salarioMedio = 16;
	pagaHorasExtras = 20;

	cout << "Ingrese las horas laboradas por el obrero: ";
	cin >> horasTrabj;

	if (horasTrabj <= 40) {
		paga = horasTrabj * salarioMedio;
	
		cout << "Esta semana, este obrero tendra un salario de: $" << paga << "\n";
	}
	else {
		horasExtras = horasTrabj - 40;
		paga = 40 * salarioMedio;
		pagaHorasExtras *= horasExtras;
		paga += pagaHorasExtras;
	
		cout << "Esta semana, este obrero tendra un salario de: $" << paga << "\n";
	}

	system("pause");
	return 0;
}