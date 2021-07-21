# Importar módulos:

import csv

# Funciones:

def readingFile():
    # Esta función leerá el registro previo y mostrará todas las respuestas
    # anteriores.
    with open("./csvFiles/register.csv", newline='') as csvFile:
        reader = csv.reader(csvFile, delimiter=",", quotechar=' ', quoting=csv.QUOTE_ALL)
        for row in reader:
            print(row)

        # Revisar

def writeFile(mode):
    # Esta función va a escribir las salidas de la función en el archivo correspondiente
    csvFila = "Crear función"
    # Revisar.

def calcFuncion(numero):
    # Representa el cáculo de la función
    termino1 = numero ** 3
    termino1 *= 5
    termino2 = numero ** 2
    termino2 *= 5
    termino3 = 6 * numero
    terminoInde = 2
    resultado = termino1 - termino2 + termino3 - terminoInde
    return(resultado)

def calculoError(lista):
    # Este bucle calculará el error relativo porcentual aproximado:
    valActual = lista[-1]
    valAnterior = lista[-2]

    numerador = valActual - valAnterior
    denominador = valActual

    porcentaje = numerador / denominador
    porcentaje *= 100
    return(porcentaje)

def hallarXr(xi, xu):
    # Esta función va a hallar el valor de xr para hacer el siguiente calculo.
    numerador = xi + xu
    xr = numerador / 2
    return(xr)

def nroIteraciones(listaNumeros, diccionarioXr):
    # Esta función va a calcular cuantas iteraciones deben realizarse a partir
    # de cierto punto:
    iteraciones = 0
    xi = float(input("\nPor favor ingrese un valor para xi: "))
    xu = float(input("Por favor ingrese un valor para xu: "))
    diccionarioXr["xi"] = xi
    diccionarioXr["xu"] = xu
    #penultimoNro = float(input("Por favor ingrese el penultimo nro calculado: "))
    #listaNumeros.append(penultimoNro)
    nroXi = calcFuncion(diccionarioXr["xi"])
    nroXu = calcFuncion(diccionarioXr["xu"])
    resultado = nroXi * nroXu
    if (resultado < 0):
        while (True):
            diccionarioXr["xr"] = hallarXr(diccionarioXr["xi"], diccionarioXr["xu"])
            ultimoNro = calcFuncion(diccionarioXr["xr"])
            listaNumeros.append(ultimoNro)
            nroXi = calcFuncion(diccionarioXr["xi"])
            nroXr = calcFuncion(diccionarioXr["xr"])
            multiplicacionXiXr = nroXi * nroXr
            # Esta multiplicación es del valor xi por el valor xr, para saber
            # si reemplazar xi o xu en la siguiente iteracion.
            if (multiplicacionXiXr == 0):
                print("\nBingo, se ha llegado a la raíz del ejercicio, de la función.")
                print(f"La cual es { diccionarioXr['xr'] }")
                print(f"Con un resultado de { listaNumeros[-1] }")
                break
            elif (multiplicacionXiXr > 0):
                diccionarioXr["xi"] = diccionarioXr["xr"]
            elif (multiplicacionXiXr < 0):
                diccionarioXr["xu"] = diccionarioXr["xr"]
            iteraciones += 1

            if (iteraciones > 2):
                porcentaje = abs(calculoError(listaNumeros))
                print(porcentaje, end='% \t| nroIteraciones: ')
                if (porcentaje <= 10):
                    print(f"Bingo, se han hecho un total de { iteraciones } iteraciones.")
                    print(f"El último nro es { listaNumeros[-1] } y el penultimo es { listaNumeros[-2] }.")
                    print(f"El valor verdadero de xr es: { diccionarioXr['xr'] }")
                    break
            print(iteraciones)

    else:
        print("Con este par de xi y xu no se puede buscar la raíz del polinomio en ese punto.")
        print("La razón es que deben ser de distinto signo para que pueda nos garantizar que hay un número impar (preferiblemente una sola raíz) de raíces.")

# Main:

def main():
    listaNumeros = []
    xr = {"xi": 0, "xu": 0, "xr": 0}

    while(True):
        print("\n¿Qué va a hacer?:")
        print("1. Ingresar y guardar valores de respuestas anteriores a un archivo.")
        print("2. Ingresar valores de respuestas anteriores en una lista (no se guarda).")
        print("3. Leer cuáles han sido las respuestas anteriores (de un archivo guardado).")
        print("4. Leer valores de respuestas anteriores de una lista (no se guarda).")
        print("5. Calcular el valor de la función en un cierto punto.")
        print("6. Calcular el error relativo porcentual aproximado actual del valor actual.")
        print("7. Calcular el metodo completamente.")

        print()
        print("10. Salir.")

        decision = int(input("\nPor favor ingrese la opción que desea realizar: "))
        print()
        
        if (decision == 1):
            print("Se van a ingresar valores y se guardarán a un archivo.")
        elif (decision == 2):
            print("Se ingresarán valores de respuestas anteriores a una lista (no se guardarán)")
            numGuardar = int(input("Por favor ingrese cuántos números va a guardar: "))
            for i in range(0, numGuardar):
                print(f"\nIngrese el valor de la respuesta nro. { i + 1 } que va a guardar: ")
                listaNumeros.append(float(input()))
            print(f"\nLos valores ingresados son: { listaNumeros }.")
        elif (decision == 3):
            print("Se leerán los valores de respuestas anteriores de un archivo guardado.")
        elif (decision == 4):
            print("Se leerán valores de respuestas anteriores de una lista (no se guarda con cada finalización del programa).")
            print(f"Los valores ingresados en una lista previamente son: { listaNumeros }.")
        elif (decision == 5):
            print("Se calculará la función en cierto valor.")
            valorIncognita = float(input("Por favor ingrese el valor de la variable equis: "))
            resultado = calcFuncion(valorIncognita)
            print("\nEl valor del resultado de la función es: " + str(resultado) + "\n")
        elif (decision == 6):
            print("Se calculará el error relativo porcentual aproximado en el punto actual de la estimación.")
            porcentaje = calculoError(listaNumeros)
            print("\nEl porcentaje es: " + str(porcentaje) + "\n")
        elif (decision == 7):
            nroIteraciones(listaNumeros, xr)


        elif (decision == 10):
            print("Saliendo...")
            break

        print("\n\n\t----------\n")


if __name__ == '__main__':
    main()
