#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa sirve como apoyo a una persona que se encuentra enferma, la cual tiene un peso de 70 kg, se encuentra de reposo ";
	cout << "y quiere saber cuantas calorias consume su cuerpo durante todo el tiempo que realice una misma actividad. Sin embargo, las unicas ";
	cout << "actividades que tiene permitido realizar son dormir o estar sentado de reposo. Los datos que tiene son que estando dormido consume ";
	cout << "1.08 calorias por minuto, mientras que estando sentado de reposo consume 1.66 calorias por minuto.\n";

	double caloriasDormir, caloriasSentarse, tiempo, totalCalorias;
	int actividad;
	bool salirBucle;

	salirBucle = false;
	caloriasDormir = 1.08 * 60.0;
	caloriasSentarse = 1.66 * 60.0;

	while (salirBucle == false) {
		cout << "¿Que actividad desea realizar?\n";
		cout << "Si quiere dormir escriba (1) sin los parentesis.\n";
		cout << "Si desea sentarse escriba (2) sin los parentesis.\n";
		cin >> actividad;

		cout << "¿Cuanto tiempo desea hacer la actividad? (escribalo en horas): ";
		cin >> tiempo;

		switch (actividad) {
		case 1:
			cout << "Usted podra quemar " << caloriasDormir << " calorias por hora, por lo que en total, quemara: \n";

			totalCalorias = caloriasDormir * tiempo;

			cout << totalCalorias << " calorias por dormir " << tiempo << " horas.\n";
			salirBucle = true;
			break;

		case 2:
			cout << "Usted podra quemar " << caloriasSentarse << " calorias por hora, por lo que en total, quemara: \n";

			totalCalorias = caloriasSentarse * tiempo;

			cout << totalCalorias << " calorias por estar sentado en reposo por " << tiempo << " horas.\n";
			salirBucle = true;
			break;

		default:
			cout << "Parece que ingreso un caracter invalido al decidir la actividad a realizar, por favor siga las instrucciones.\n\n";
		}
	}
	system("pause");
	return 0;
}