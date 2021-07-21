

def func1(var):
    cuboVar = var ** 3
    cuadradoVar = var ** 2

    term1 = -723470 * cuboVar

    term2 = 4364797560 * cuadradoVar

    term3 = 8777786061490 * var

    term4 = 5884144271972340

    resultado = term1 + term2 - term3 + term4
    resultado /= 60

    return(resultado)

def main():
    print("Ejercicio de interpolación por el método de Lagrange")

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
