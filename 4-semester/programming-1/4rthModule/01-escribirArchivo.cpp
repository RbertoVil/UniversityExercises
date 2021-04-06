#include <iostream>
#include <fstream>

#include <stdlib.h> // Para acceder a las funciones rand() y srand().
#include <time.h>   // Utilizar el tiempo para generar numeros aleatorios.

using namespace std;

int main() {
    int clave, semestre, grupo, edad;
    string nombre, linea;

    cout << "\nEste algoritmo se debe usar una unica vez, ya que se encarga ";
    cout << "de crear un archivo que sera nuestra base de datos donde se ";
    cout << "guardaran algunos datos acerca de los estudiantes de una ";
    cout << "universidad.\n";

    cout << "\nLos datos que se guardaran son:\n";
    cout << "*Clave (un identificador por cada estudiante).\n";
    cout << "*Nombre del estudiante.\n";
    cout << "*Semestre por el cual el estudiante cursa.\n";
    cout << "*Grupo al cual el estudiante pertenece.\n";
    cout << "*Edad del estudiante.\n\n";

    srand(time(NULL));
    // Acá hacemos que los valores de rand() al crear numeros aleatorios 
    // sean casi unicos cada vez que corramos el programa.

    ofstream Escribir("./baseDatos/datosEstudiants.txt", ios::out);
    // Acá creamos un archivo para escribir en él.

    if (Escribir.is_open()) {
        // Si el fichero Escribir está abierto.

        Escribir << "Clave\t," << "\tNombre:\t\t," << "\tSemestre:\t,";
        Escribir << "\tGrupo:\t\t," << "\tEdad:\n";
        // En estas dos líneas añadimos el encabezado de nuestra lista.
        
        for (int i = 1; i <= 15; i++) {
            // Acá vamos a agregar 15 estudiantes a nuestra base de datos.
            cout << "\nPor favor ingrese el nombre del estudiante numero ";
            cout << i << ": ";

            cin >> nombre;

            clave = i;

            semestre = rand() % 10 + 1;
            // rand() funciona de una forma peculiar, va a elegir 1 numero entre
            // cero y el numero que va después del signo módulo "%" (en este
            // caso el 11) sin contar este último, sin embargo, como queremos
            // que comience mínimo en 1 (porque nadie comienza a estudiar en el
            // semestre 0) debemos sumarselo al numero a nuestra función.

            edad = rand() % 8 + 17;
            // se elejirá numero aleatorio entre 17 y 24 (17 + [8 - 1])
            
            grupo = rand() % 7 + 1;
            // Se elejirá un numero entre 1 y 7 (1 + [7 - 1]);
            // Se elijió al azar el nro 7 como el maximo de grupos que iban a
            // haber.
            // Acá ingresamos estos datos mediante numeros aleatorios.
 
            Escribir << clave << "\t,\t" << nombre << "\t\t,\t" << semestre;
            Escribir << "\t\t,\t" << grupo << "\t\t,\t" << edad << "\n";
        }

        Escribir.close();
        // Una vez agregados los estudiantes se cierra el archivo.
    }
    else {
        cout << "\nOcurrio un error, el archivo no se puede crear...\n";
    }

    cout << "\nLos estudiantes ingresados a la base de datos fueron:\n\n";


    ifstream Leer("./baseDatos/datosEstudiants.txt", ios::in);
    // Acá abrimos el archivo creado anteriormente para leerlo.

    if (Leer.is_open()) {
        while (! Leer.eof()) {
            getline(Leer, linea);
            cout << linea << endl;
        }
        Leer.close();
    }
    else {
        cout << "\nOcurrio un error, el archivo no se pudo leer...\n";
    }



    // Para evitar que el algoritmo se cierre de golpe.
    // Como alternativa a System("pause")
    int salir;
    cout << "\n\nPor favor ingrese un cero (0) para salir...\n";
    cout << "Ingrese el cero sin los parentesis.\n";

    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
