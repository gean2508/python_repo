//array es una estructura de datos, se le conoce tambien como lista de datos
//puedes guardar valores: numero, strign, objetos


//"nombrearray.length" sirve para ver la longitud del array
//console.log(frutas.length);
const frutas = ['fresa', 'banana', 'manzana', 'cereza'];
console.log(frutas); //imprime contenido del array
console.log(frutas.length); //imrpime la longitu del array
console.log(frutas[2])//imprime el valor del array que tenga el indice 2
//los arrays tienen metodos() que no ayudan a mutar el arrray
const masfrutas = frutas.push('pera')//agraga valores al array al final.
const ultimo = frutas.pop('pera')//elimina el ultimo elemento agragado del array



//.lenght devuelve la longitud del array.
//.push() agrega elementos al final de array.
//.pop() elimina un elemento del array.
//.unshift() agrega un elemento al array, pero lo agrega al inicio.
//.shift() elimina el elemento que está en el inicio del array.
//.indexOf  devuelve la posición de un elemento del array.


//un array no guarda “datos distintos dentro”(por ejemplo: 
//no se puede guardar string y enteros en un mismo array),
//sino obligatoriamente todos sus elementos deben ser del mismo tipo