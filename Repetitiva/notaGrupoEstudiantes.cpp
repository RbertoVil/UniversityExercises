#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este algoritmo va a realizar la siguiente tarea: Dada la c.i., nombre y nota definitiva de 5 materias de cada estudiante pertenecientes a un grupo de 35; calculara y mostrara como salida el promedio de notas de cada estudiante.\n";

	string nombreEstudiante;
	int cedula, countrMateria;
	float notaMaterias, promedioNotas;

	for (int contador = 1; contador <= 35; contador++) {
	
		cout << "\nPor favor ingrese el nombre del estudiante " << contador << ": ";
		cin >> nombreEstudiante;

		cout << "Ahora ingrese la cedula de identidad del estudiante: ";
		cin >> cedula;

		countrMateria = 1;
		promedioNotas = 0;

		while (countrMateria <= 5) {
		
			cout << "Por favor ingrese la nota de la materia " << countrMateria << ": ";
			cin >> notaMaterias;

			promedioNotas += notaMaterias;
			countrMateria += 1;
		}

		promedioNotas /= 5;

		cout << "El estudiante ( " << nombreEstudiante << " ) portador de la cedula de identidad ( " << cedula << " ) tiene un promedio de sus notas de ( " << promedioNotas << " ) puntos.\n";

	}
	system("pause");
	return 0;
}