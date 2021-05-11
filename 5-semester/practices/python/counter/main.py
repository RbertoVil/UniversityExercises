import datetime
import time
import csv

def main():
    contador = 0
    dia = 0
    while (dia < 3):

        if contador == 0:
            # Si es la primera iteración añade la cabecera del archivo.
            with open("file.csv", mode='x', newline='') as writer:
                csvWriter = csv.writer(writer, delimiter=',', quotechar='"',
                quoting=csv.QUOTE_ALL)

                csvWriter.writerow(['dia','fecha','hora','contador (aumenta cada 2 hrs)'])

        for i in range(24):
            time.sleep(7200)

            with open("file.csv", mode='a', newline='') as writer:
                csvWriter = csv.writer(writer, delimiter=',', quotechar='"',
                quoting=csv.QUOTE_ALL)

                today = datetime.datetime.now()
                fecha = f"{ today.day } - { today.month } - { today.year }"
                hora = f"{ today.hour }:{ today.minute }"

                contador += 1
                row = [dia, fecha, hora, contador]

                csvWriter.writerow(row)
        
        dia += 1

    print(f"Se ha finalizado el conteo, en total pasaron { contador } minutos.")




if __name__ == '__main__':
    main()
