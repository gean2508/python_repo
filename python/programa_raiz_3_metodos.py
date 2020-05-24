

print('**********Programing by 32απ***************')
nu_metodo = int(input('Seleccione un metodo:  1_Busqueda_Exhaustiva; 2_Aproximación_soluciones; 3_Busqueda_Binaria: '))
if nu_metodo == 1:
    objetivo = int(input('Ingresa un entero: '))
    
    def exhaustiva (objetivo):    
        respuesta = 0

        while respuesta**2 < objetivo:
            respuesta +=1
            print(respuesta)
            
        if respuesta**2 == objetivo:
            print(f'la raiz cuadrada de {objetivo} es {respuesta}')
        else:
            print(f'{objetivo} no tiene una raiz cuadrada exacta')
    exhaustiva(objetivo)  


elif nu_metodo == 2:
     objetivo = int(input('Ingresa un entero: '))
     def aproximacion (objetivo):
        epsilon = 0.01
        #------------------------------epsilon a mayor velocidad menor exactitud y viceversa
        paso = epsilon**2
        respuesta = 0.0

        while abs(respuesta**2 - objetivo) >= epsilon and respuesta <= objetivo:
            
            respuesta += paso
            
            
        if abs(respuesta**2 - objetivo) >= epsilon:
            print('No se encontro la raiz cuadrada del {objetivo}')   
        else:
            print(f'La raiz cuadrada de {objetivo} es {respuesta}')
     aproximacion(objetivo)    

else:
    objetivo = int(input('Ingresa un entero: '))    
    def binaria (objetivo):
        epsilon = 0.01
        bajo = 0.0
        alto = max(1.0, objetivo)
        respuesta = (alto + bajo) / 2

        while abs(respuesta**2 - objetivo) >= epsilon:
        
            if respuesta**2 < objetivo:
                bajo = respuesta
            else:
                alto = respuesta
            respuesta = (alto + bajo) / 2
        print(f'La raiz cuadrada de {objetivo} es {respuesta}')
    binaria(objetivo)  




   