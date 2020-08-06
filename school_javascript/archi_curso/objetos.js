//funcionan  casi de la misma que las clases en python
// solo que e constructor aqui es una funcion que declaramos explicitamente.
//this. inicializa la variables, hace referencia al objeto padre.


// tambien se puede crear un objeto solito sin constructor

//----------------------funcion constructora
function auto(marca, modelo, color){
    this.marca = marca;
    this.modelo = modelo;
    this.color = color;
}

//For que crea las instancias del objeto y añade a un array
let autos = [];
// i tendria que ser menor que 30 pero por tiempo de ejecution pongo 3.
for(let i = 0; i < 3; i++){
    //pedimos los valores al usuario.
    let marca = prompt("Ingresa la marca del auto: ")
    let modelo = prompt("Ingresa el modelo del auto: ")
    let color = prompt("Ingresa el color del auto: ")
    //con .push() metemos valores al array en este caso las variables marca, modelo, color
    //adentro de push creamos la instancia del objeto "new auto(parametros del objeto)"
    autos.push(new auto(marca, modelo, color));
}


//for que lista los ementos del array
//autos.length = longitud del array
for(let i = 0; i < autos.length; i++){
    console.log(autos[i]);
}