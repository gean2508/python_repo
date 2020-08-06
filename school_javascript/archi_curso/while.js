let estudiantes = ["Gean","Amy","Geanca"];

function saludar(estudiante){
    console.log(`Hola ${estudiante}`);
}
//mientras el parametro sea true, el while se ejecuta.
while(estudiantes.length > 0){
    let estudiante = estudiantes.shift();   //este while va a generar una variable llamada estudiante,
                                            // shift es un metodo de mutacion que saca un elemento del array en cada iteracion 
    saludar(estudiante);
}