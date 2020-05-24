#calcula raiz cuadrada con enumeración exhaustiva.
objetivo = int(input("Escoge un número"))
respuesta = 0

while respuesta**2 < objetivo:
    respuesta +=1
    print(respuesta)
    
if respuesta**2 == objetivo:
    print(f'la raiz cuadrada de {objetivo} es {respuesta}')
else:
    print(f'{objetivo} no tiene una raiz cuadrada exacta')
    