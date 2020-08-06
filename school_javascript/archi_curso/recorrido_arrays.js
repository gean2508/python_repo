// let articulos = []


// //ciclo que pide  nombre y csto, empuja al array las instancias del objeto articulo
// for(let i = 0; i < 3; i++){
//     let nombre = prompt("Ingrese nombre del articulo: ")
//     let costo = prompt("Ingrese costo del articulo: ")
//     articulos.push(new articulo(nombre, costo))
// }
// //cclo que lista e array
// for(let i = 0;i < articulos.length; i++){
//     console.log(articulos[i])
// }

// //constructor del objeto articulo
// function articulo(nombre, costo){
//     this.nombre = nombre;
//     this.costo = costo;
// }

let articulos = [
    {nombre: 'bici', costo: 3000},
    {nombre: 'tv', costo: 2500},
    {nombre: 'libro', costo: 120},
    {nombre: 'laptop', costo: 20000},
    {nombre: 'teclado', costo: 500},
    {nombre: 'audifonos', costo: 1700}
];
// el metodo filter valida si algo es verdadero o falso y 
// genera un nuevo array no modifica el array existente
// en este caso el array articulos
let articulosFiltrado = articulos.filter(function(articulo){
    // como parametro de la function debo pasar el array que quiero filtrar
    // articulosFiltrados es el nuevo array que se va a crear
    return articulo.costo <= 500
});

// este es el segundo meetodo
// metodo de map, me ayuda a mapear cierto articulos
// este metodo tambien genera un nuevo array, n modifica el existente
// como parametro de la function debo pasar el array que quiero mapear
let articulos = [
    {nombre: 'bici', costo: 3000},
    {nombre: 'tv', costo: 2500},
    {nombre: 'libro', costo: 120},
    {nombre: 'laptop', costo: 20000},
    {nombre: 'teclado', costo: 500},
    {nombre: 'audifonos', costo: 1700}
];

let articulosMapeados = articulos.map(function(articulos){
    //para que retorne los items debo usar un if o si no me devuelve booleans
    if(articulos.costo >= 1700){
        return articulos
    }
})




// el metodo find es otra forma de recorrer un array
// ¿Cual es la diferencia entre find y filter ?

// filter retorna todas las coincidencias 
// y find retorna solo la primer coincidencia
// tambien existe forEach(), some()




// shift()     -> Elimina el elemento al principio del arreglo
// pop()      -> Elimina el elemento al final del arreglo
// unshift() -> Agrega el elemento al principio del arreglo
// push()     -> Agrega el elemento al final del arreglo