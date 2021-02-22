#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este algoritmo va a calcular la nota definitiva de N estudiantes. Teniendo en cuenta que son 4 modulos y que cada modulo tiene un valor de 25% como maximo. Para sacar la nota definitiva se deben sumar las notas de los 4 modulos, multiplicar el resultado por 4, luego dividir ese resultado entre 100, y el resultado de eso se le suma 1.\n";

	float notaEstudiante, notaM1, notaM2, notaM3, notaM4, sumaNotas;
	int nroEstudiantes;

	cout << "Por favor ingrese el numero de estudiantes: ";
	cin >> nroEstudiantes;

	for (int contador = 1; contador <= nroEstudiantes; contador++) {
		cout << "Por favor ingrese las notas del estudiante " << contador << " (en porcentaje, entre 1 y 25 por cada modulo).\n";

		cout << "Las notas del modulo 1: ";
		cin >> notaM1;

		cout << "Las notas del modulo 2: ";
		cin >> notaM2;

		cout << "Las notas del modulo 3: ";
		cin >> notaM3;

		cout << "Las notas del modulo 4: ";
		cin >> notaM4;

		sumaNotas = notaM1 + notaM2 + notaM3 + notaM4;

		notaEstudiante = sumaNotas * 4.0;
		notaEstudiante /= 100.0;
		notaEstudiante += 1.0;
	
		cout << "La nota del estudiante " << contador << " es: " << notaEstudiante << ".\n";
	}

	system("pause");
	return 0;
}