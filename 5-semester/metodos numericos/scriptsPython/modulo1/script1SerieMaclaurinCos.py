import math

def factorial(numero):
    sumatoria = 0
    if numero == 0:
        fact = 1
    else:
        for i in range(numero):
            if i == 0:
                # Si es la primera iteracion del bucle
                sumatoria = numero
            else:
                sumatoria *= numero
            numero -= 1
        fact = sumatoria
    return(fact)

def terminoCosX(potencia):
    numerador = math.pi ** potencia
    denominador1 = 4 ** potencia
    denominador2 = factorial(potencia)
    denominador = denominador1 * denominador2
    resultado = numerador / denominador
    print(f"\n{ numerador }\n-------\n{ denominador }\n")
    print("El resultado es: " + str(resultado))

def main():
    potencia = int(input("Por favor ingrese el número de potencia\n"))
    print("\nLa división sería:\n")

    terminoCosX(potencia)



if __name__ == '__main__':
    main()
