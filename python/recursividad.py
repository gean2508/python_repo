import time

print('Primer algoritmo de recursividad')

print('>>>>>><>Despegue en: ')
time.sleep(0.5)
def cuenta_regresiva(numero):
    numero -= 1
    if numero > 0:
        print (numero)
        time.sleep(0.5)
        cuenta_regresiva(numero)
    else:
        time.sleep(0.5)
        print ('>>>>>>>Ignition<<<<<<<')    
cuenta_regresiva(11)        

time.sleep(1)

print('>>>>>>>Seguimos ejecutando algoritmos\n para eso fuimos creados')

time.sleep(0.5)
print('Leyendo algorimo.....')

time.sleep(0.5)
print('Validando.....')

time.sleep(2)
print('¡Error!')

time.sleep(0.5)
print('Tiempo de validacion agotado')

time.sleep(2)
print('>>>>>>>>>>>>>>><Resolviendo conflicto')

time.sleep(5)
print('!Hecho¡')

time.sleep(0.5)
print('Acceso a toda el area aceptado, ahora ya puedes encontrar el factorial de un número cualqueira!!')

time.sleep(0.5)
print('Segundo algoritmo de recursividad')
time.sleep(1)
numero = int(input('Ingresa un entero: '))

def factorial(numero):
    print('Valor inicial: ',numero)
    if numero > 1:
        numero = numero * factorial(numero -1)
    print('Valor final: ',numero )    
    return numero 
print(factorial(numero))


time.sleep(1)
print('Ahora el algoritmo de Platzi')
# n = 0, 1
# terminar de implementar el algoritmo de platzi sobre la recursividad (profe: aroesti)
def fibonacci(n):
    print(f'hola soy el {n}')
    if n == 0 or n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)
    