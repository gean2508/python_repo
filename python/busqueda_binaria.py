import time
print('Programa que calcula la raiz cuadrada de un numero entero positivo')
time.sleep(2)
print('Creador por @gean_duv')
objetivo = int(input('Escoge un número: '))
time.sleep(0.5)#no pertenece al algoritmo de busqueda binaria
exponente = int(input(f'¿Quieres elevar la base a algun exponente?(si no quieres digita 1): ({objetivo}): '))#no pertenece al algoritmo de busqueda binaria
expo = objetivo**exponente
time.sleep(0.5)#no pertenece al algoritmo de busqueda binaria
exponente_raiz = int(input(f'valor correspondiente a la Raiz a calcular de: ({expo}): '))#no pertenece al algoritmo de busqueda binaria
epsilon = 0.01
bajo = 0.0
alto = max(1.0, objetivo)
respuesta = (alto + bajo) / 2
time.sleep(0.5)  
print('Paciencia, estamos calculando!...')
time.sleep(0.5)  
while abs(respuesta**exponente_raiz- objetivo) >= epsilon:
    # print(f'bajo={bajo}, alto={alto}, respuesta={respuesta}')
    if respuesta**exponente_raiz < objetivo:
        bajo = respuesta
    else:
        alto = respuesta
    respuesta = (alto + bajo) / 2
time.sleep(0.5)    
print(f'La raiz {exponente_raiz} de {objetivo} es {respuesta}')