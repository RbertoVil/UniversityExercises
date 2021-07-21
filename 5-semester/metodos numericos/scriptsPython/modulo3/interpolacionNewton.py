

def func1(var):
    cuboVar = var ** 3
    cuadradoVar = var ** 2

    term1 = -12057.8332 * cuboVar
    term2 = 72746625.1948 * cuadradoVar
    term3 = 146296432737.3 * var
    term4 = 98069070111938.73
    resultado = term1 + term2 - term3 + term4
    return(resultado)

def main():
    print("Ejercicio de interpolación por el método de Newton")

    while True:
        var = int(input("\nPor favor ingrese el valor de la variable X: "))
        resultado = func1(var)
        print(resultado)

        print("\n¿Desea calcular otro valor?")
        respuesta = str(input("[s] o [n]: "))

        if respuesta == "n":
            break


if __name__ == '__main__':
    main()
