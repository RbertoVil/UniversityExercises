#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string linea, header, coma, nombre, semestre, grupo, edad;

    int formato, clave, contador;

    contador = 1;

    ifstream Copiando("./baseDatos/datosEstudiants.txt", ios::in);
    // Acá leemos el archivo que vamos a copiar...

    ofstream Pegando("./baseDatos/datosEstudiants1.txt", ios::out);
    // Este archivo será en donde pegaremos nuestros datos.

    if (Copiando.is_open() && Pegando.is_open()) {
        // Si los archivos abren correctamente.

        cout << "\nPor favor decida la forma en la que quiere que se";
        cout << " copien los datos. Ingrese:\n";
        cout << "(1)- Para copiar todos los datos junto con el formato";
        cout << " (espacios y tabulaciones)\n";
        cout << "(2)- Para copiar unicamente la informacion, los datos, ";
        cout << "separados por una unica coma.\n";
        cout << "(3)- Para copiar los datos separados por una coma y un ";
        cout << "espacio antes y despues de la misma.\n";

        while (true) {
            // Para que solo se ingresen valores adecuados

            cout << "Respuesta: ";
            cin >> formato;
            if (formato == 1 || formato == 2 || formato == 3) {
                break;
            }
            else {
                cout << "\nEl valor ingresado es invalido, por favor ";
                cout << "siga las instrucciones.\n\n";
            }
        }

        cout << "\n\nCopiando al archivo:\n\n";

        while (!Copiando.eof()) {
            // Mientras el archivo a copiar no haya llegado a su fin.

            if (formato == 1) {
                getline(Copiando, linea);
                // Guardamos cada línea del archivo en la variable línea.

                Pegando << linea << endl;
                // Ingresamos cada línea a nuestro archivo donde pegaremos los
                // datos.

                cout << linea << endl;
            }
            else if (formato == 2 || formato == 3) {

                if (contador == 1) {
                    // Si es el primer registro (encabezado del archivo):

                    Copiando >> header >> coma >> nombre >> coma >> semestre;
                    Copiando >> coma >> grupo >> coma >> edad;

                    if (formato == 3) {
                        // Si queremos que los datos estén separados por una coma
                        // y un espacio antes y después de la misma, la
                        // asinaremos de la siguiente manera:

                        coma = " , ";
                    }

                    Pegando << header << coma << nombre << coma << semestre << coma;
                    Pegando << grupo << coma << edad << endl;

                    cout << header << coma << nombre << coma << semestre << coma;
                    cout << grupo << coma << edad << endl;
                    
                }
                else {

                    Copiando >> clave >> coma >> nombre >> coma >> semestre;
                    Copiando >> coma >> grupo >> coma >> edad;

                    if (clave != contador) {
                        // Cuando llega al último registro del archivo, suele
                        // volver a repetir el bucle porque aún no ha llegado al
                        // EOF, por lo que esto verificará que no se vuelva a
                        // imprimir el registro anterior.
                        break;
                    }

                    if (formato == 3) {
                        // Si queremos que los datos estén separados por una coma
                        // y un espacio antes y después de la misma, la
                        // asinaremos de la siguiente manera:

                        coma = " , ";
                    }

                    contador += 1;

                    Pegando << clave << coma << nombre << coma << semestre << coma;
                    Pegando << grupo << coma << edad << endl;

                    cout << clave << coma << nombre << coma << semestre << coma;
                    cout << grupo << coma << edad << endl;

                }
            }
        }
        Copiando.close();
        Pegando.close();
        // Cerramos los archivos.
    }
    else {
        cout << "\nError: algun archivo no se pudo abrir...\n\n";
    }


    // Para que el programa no se cierre de golpe.
    // Como alternativa a System("pause")
    int salir;
    cout << "\n\nPor favor ingrese un cero (0) para salir.\n";
    cout << "Ingrese el cero sin parentesis.\n";
    while (true) {
        cin >> salir;
        if (salir == 0) {
            break;
        }
    }
    return(0);
}
