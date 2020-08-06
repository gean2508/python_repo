//    Los bucles pueden ejecutar un bloque de código varias veces. JavaScript admite diferentes tipos de bucles:

//    for - recorre un bloque de código varias veces

//    for/in - recorre las propiedades de un objeto

//   for/of - recorre los valores de un objeto iterable

//    while - recorre un bloque de código mientras se cumple una condición específica

//    do/while - también recorre un bloque de código mientras se cumple una condición específica


let miembros = ["Daniel","Amanda", "Gean", "Carlos"]

function saludar(estudiante){
    console.log(`Hola, ${estudiante}`)
}
for(let i = 0; i < miembros.length; i++){
    saludar(miembros[i]);
}

//Otra forma de hacer un ciclo es con forof

for(let miembro of miembros){
   saludar(miembro)
 }

//Inicializamos nuestra variable en singular "miembro" de nuuestro array que esta en plural