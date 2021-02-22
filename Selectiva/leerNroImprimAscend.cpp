#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Este algoritmo va a leer dos numeros y los va a imprimir de forma ascendente.\n";
	
	float num1, num2;

	cout << "Ingrese el numero 1: ";
	cin >> num1;

	cout << "Ingrese el numero 2: ";
	cin >> num2;

	if (num1 <= num2) {
		cout << "El orden ascendente seria:\n";
		cout << num1 << " , " << num2 << "\n";
	}
	else if (num1 > num2) {
		cout << "El orden ascendente seria:\n";
		cout << num2 << " , " << num1 << "\n";
	}
	system("pause");
	return 0;
}