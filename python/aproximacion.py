objetivo = int(input('escoge un número: '))
epsilon = 0.01
#------------------------------epsilon a mayor velocidad menor exactitud y viceversa
paso = epsilon**2
respuesta = 0.0

while abs(respuesta**2 - objetivo) >= epsilon and respuesta <= objetivo:
    print(abs(respuesta**2 - objetivo), respuesta)
    respuesta += paso
    
    print(f'{respuesta} soy la respuesta')   
    print(f'{epsilon} soy epsilon')
    
if abs(respuesta**2 - objetivo) >= epsilon:
    print('No se encontro la raiz cuadrada del {objetivo}')   
else:
    print(f'La raiz cuadrada de {objetivo} es {respuesta}')