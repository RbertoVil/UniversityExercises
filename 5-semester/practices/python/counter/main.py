import datetime
import time
import csv

def main():
    contador = 0
    while (contador < 5):
        with open("file.csv", mode='a') as writer:
            time.sleep(60)

            today = datetime.datetime.now()
            fecha = f"{ today.day } - { today.month } - { today.year }"
            hora = f"{ today.hour }:{ today.minute }"

            contador += 1
            print(f"Lleva { contador } minutos. Durante fecha: { fecha } y hora: { hora }", file=writer)

    print(f"Se ha finalizado el conteo, en total pasaron { contador } minutos.")




if __name__ == '__main__':
    main()
