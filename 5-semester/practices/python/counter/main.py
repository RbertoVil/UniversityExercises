import datetime
import time
import csv

def main():
    contador = 0
    dia = 0
    while (dia < 2):
        for i in range(5):
            time.sleep(60)

            with open("file.csv", mode='a', newline='') as writer:
                csvWriter = csv.writer(writer, dialect='excel')

                today = datetime.datetime.now()
                fecha = f"{ today.day } - { today.month } - { today.year }"
                hora = f"{ today.hour }:{ today.minute }"

                contador += 1
                row = [dia, fecha, hora, contador]
        
        dia += 1

    print(f"Se ha finalizado el conteo, en total pasaron { contador } minutos.")




if __name__ == '__main__':
    main()
