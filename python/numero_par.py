numero = int(input('Inserte número entero '))
par_search = (numero / 2) * 2 
if numero < 0 :
    print('Necesitamos usar número positivos en esta mision')
    print(numero) 
               
if numero == par_search:
#esta funcion me esta devolviendo el valor almacenado que siempre es igual mas no par
         print(f'estos son pares {numero}, {par_search}')
              
    
else:
     print('No es par papu :c')    