#include <iostream>
#include <stlib.h>

using namespace std;

int main() {
    
    int sueldoBase, sueldoTotal, bonificacion, nroHijos;
    bonificacion = 80;

    cout << "Este programa va a calcular el sueldo total de un empleado.\n";
    cout << "Este sueldo total sera el sueldo base mas una bonificacion.\n";
    cout << "Dicha bonificacion sera de 80bs por cada hijo que tenga el empleado.\n\n";
    
    cout << "Por favor ingrese la cantidad en bs del sueldo base del empleado: ";
    cin >> sueldoBase;

    cout << "Ahora ingrese la cantidad de hijos que tiene el empleado: ";
    cin >> nroHijos;

    bonificacion *= nroHijos;
    sueldoTotal = sueldoBase + bonificacion;

    cout << "El empleado obtendra una bonificacion de: " << bonificacion << "\n";
    cout << "Y su sueldo total sera de: " << sueldoTotal;

    system("pause");
    return 0;
}
