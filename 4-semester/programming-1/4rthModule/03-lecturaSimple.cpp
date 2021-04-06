#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int numero, contador, acumulador, respuesta;

    string linea, coma, nombre, semestre, grupo, edad, identificador;
    // La variable 'coma' la usaremos para guardar todas las comas, ya que no
    // las necesitaremos.

    contador = 1;

    ifstream leyendo("./baseDatos/datosEstudiants.txt", ios::in);

    if (leyendo.is_open()) {
        // Si el archivo abre sin problemas:

        cout << "\nLa lectura se ha realizado correctamente...\n\n";
        
        cout << "Le gustaria leer los datos con el formato original del ";
        cout << " archivo, o prefiere leer solo los datos (eliminando ";
        cout << "todo el espacio entre los campos). Ingrese:\n\n";
        cout << "(1)- Para ver el archivo en su formato original.\n";
        cout << "(2)- Para ver el archivo sin los espacios innecesarios.\n\n";
        
        while (true) {
            cout << "Por favor ingrese el numero 1 o el numero 2: ";
            cin >> respuesta;
            if (respuesta == 1 || respuesta == 2) {
                break;
            }
        }
        
        cout << endl;
        // Añadimos un espacio para mejorar la lectura al correr el
        // código.

        if (respuesta == 1) {
            getline(leyendo, linea);
            // Guardamos el encabezado de nuestros datos.
            cout << linea << endl;
        }
        else {
            leyendo >> identificador >> coma >> nombre >> coma;
            leyendo >> semestre >> coma >> grupo >> coma >> edad;

            cout << identificador << coma << nombre << coma;
            cout << semestre << coma << grupo << coma << edad << endl;
        }

        while (!leyendo.eof()) {
            // Mientras 'leyendo' no ha llegado al final del archivo.

            if (respuesta == 1) {
                // Para ver el archivo en su formato original.
                getline(leyendo, linea);

                cout << linea << endl;
            }
            else if (respuesta == 2) {

                leyendo >> numero >> coma >> nombre >> coma >> semestre;
                leyendo >> coma >> grupo >> coma >> edad;
                // Acá leemos todas las cadenas del archivo a leer

                if (numero != contador) {
                    // Cuando se terminen los datos de nuestro archivo, 'numero'
                    // seguirá siendo el del anterior registro, sin embargo el
                    // contador se incrementará, por lo que serán diferentes y
                    // no debe imprimirse en pantalla.
                    break;
                }
                else {
                    cout << numero << coma << nombre << coma << semestre;
                    cout << coma << grupo << coma << edad << endl;
                }

                contador += 1;
            }            
        }
    }
    else {
        cout << "Ha ocurrido un error, el archivo no pudo abrirse...\n";
    }

    leyendo.close();
    // Cerramos el archivo.



    // Para evitar que el programa se cierre solo.
    // Como alternativa a System("pause")
    int salir;
    cout << "\n\nPor favor ingrese un cero (0) para salir.\n";
    cout << "Ingrese el cero sin los parentesis.\n";
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
