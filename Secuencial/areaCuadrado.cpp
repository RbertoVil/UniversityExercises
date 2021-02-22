#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    cout << "Este programa va a calcular el area de un cuadrado con los datos que le proporciones:\n";

    float base, altura, area;

    cout << "Dime la altura del cuadrado: ";
    cin >> altura;

    cout << "Dime la base del cuadrado: ";
    cin >> base;

    area = altura * base;

    cout << "El area total del cuadrado es de " << area << "\n";

    system("pause");
    return 0;
}