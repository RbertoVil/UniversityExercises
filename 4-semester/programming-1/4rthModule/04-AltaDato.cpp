#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string header, coma, nombre, semestre, grupo, edad;
    // La variable 'coma' es para guardar todas las comas de nuestro archivo al
    // leerlo.

    int numero, clave, contador = 1;

    bool permiso;

    ifstream consulta;
    ofstream escritura;

    cout << "\nPor favor ingrese el numero de identificador (clave)";
    cout << " del estudiante que desea agregar en la base de datos: ";

    cin >> numero;

    // Primero consultaremos nuestros datos para verificar que el estudiante no
    // este registrado con anterioridad.

    consulta.open("./baseDatos/datosEstudiants1.txt", ios::in);

    if (consulta.is_open()) {
        getline(consulta, header);
        // Guardamos el encabezado del archivo de datos.

        while (!consulta.eof()) {
            consulta >> clave >> coma >> nombre >> coma >> semestre;
            consulta >> coma >> grupo >> coma >> edad;

            contador++;

            if (clave == numero) {
                // Si el numero de clave del estudiante a agregarya existe
                // entonces no permitirá agregarlo de nuevo al archivo.

                cout << "\nLo siento... Este estudiante ya esta en el archivo";
                cout << " por lo que no tiene el permiso para agregarlo ";
                cout << "nuevamente.\n";

                permiso = false;

                break;
            }
            else {
                cout << "\nEl estudiante con la clave que usted acaba de ":
                cout << "ingresar no se encuentra en nuestra base de datos ";
                cout << "por lo que se le concede el permiso de ingresarlo.\n";

                permiso = true;
            }
        }
        consulta.close();
    }
    else {
        cout << "\n\nHa ocurrido un error, el archivo no abre...\n";
    }

    if (permiso == true) {
        // Ahora que verificamos que el estudiante no esta en la base de datos 
        // vamos a escribir los datos del nuevo estudiante al final de la misma.

        escritura.open("./baseDatos/datosEstudiants1.txt", ios::app);

        if (escritura.is_open()) {
            cout << "Por favor ingrese el nombre del estudiante";
            cout << " que se ingresara a la base de datos: ";
            cin >> nombre;

            cout << "\nAhora ingrese el semestre que cursa: ";
            cin >> semestre;

            cout << "\nAhora el numero del grupo al que ";
            cout << "pertenece (nro entre 1 y 7): ";
            cin >> grupo;

            cout << "\nAhora ingrese la edad del estudiante: ";
            cin >> edad;

            escritura << numero << " , " << nombre << " , ";
            escritura << semestre << " , " << grupo << " , ";
            escritura << edad << endl;

            escritura.close()
        }
        else {
            cout << "\nHa ocurrido un error, el estudiante no se pudo ingresar ";
            cout << "a la base de datos.\n\n";
        }
    }

    cout << permiso << endl;


    // Para que el programa no se cierre de golpe.
    // Como alternativa a system("pause")
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
