#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este algoritmo va a calcular el promedio general de una seccion, tomando en cuenta que esta compuesta por 25 estudiantes y que se tiene la nota definitiva de cada uno de ellos.\n";

	float promedioGeneral, notaEstudiante, sumaNotas;
	sumaNotas = 0;

	for (int contador = 1; contador <= 25; contador++) {
		cout << "Por favor ingrese la nota definitiva del estudiante " << contador << ": ";
		cin >> notaEstudiante;

		sumaNotas += notaEstudiante;
	}

	promedioGeneral = sumaNotas / 25.0;

	cout << "El promedio general de la seccion es de " << promedioGeneral << " pts.\n";

	system("pause");
	return(0);
}