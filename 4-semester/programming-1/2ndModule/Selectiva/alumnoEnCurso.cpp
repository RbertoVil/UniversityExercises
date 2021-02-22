#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este programa determinara si un alumno aprueba o no un curso.\n";
	cout << "Teniendo en cuenta que cada evaluacion tiene un valor de 100 puntos y\n";
	cout << "la calificacion promedio minima para aprobar son 70 puntos.\n";

	double calific1, calific2, calific3, calificacionFinal;

	cout << "Por favor ingrese las calificaciones del estudiante de la primera evaluacion: ";
	cin >> calific1;

	cout << "Ahora ingrese las calificaciones de la segunda evaluacion: ";
	cin >> calific2;

	cout << "Ahora ingrese las calificaciones de la tercera evaluacion: ";
	cin >> calific3;

	calificacionFinal = calific1 + calific2 + calific3;
	calificacionFinal /= 3;

	cout << "La calificacion final del estudiante es: " << calificacionFinal << "\n";

	if (calificacionFinal < 70) {
		cout << "Por lo que el estudiante no ha aprobado el curso\n";
	}
	else {
		cout << "Por lo que el estudiante ya aprobo el curso.\n";
	}
	system("pause");
	return 0;
}