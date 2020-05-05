var usuario = prompt("what's ur peso?");
var planeta = prompt("elige el planeta:\n 1: es marte  2: jupiter")
var g_tierra = 9.8;
var g_marte = 3.7;
var g_jupiter = 24.8;
var peso = usuario;
var peso_final;
var peso_final_jupiter;
var planetas_texto = ["Marte", "Jupiter" ];
var primero = planetas_texto[0];
var segundo = planetas_texto[1];

// peso_final = parseInt(peso_final)
// --------------------condicional de usuario
// if (typeof usuario !='string' ){
//     document.write(" | Debes ingresar un número DUH!")
// }


if(planeta == 1)
{
    peso_final = usuario * g_marte / g_tierra;
    document.write("Tu peso en " + primero + " es: "  + parseInt(peso_final) + " kg");
} 
else if(planeta == 2)
{
    peso_final_jupiter = usuario * g_jupiter / g_tierra;
    document.write("Tu peso en " + segundo  + " es: " + parseInt(peso_final_jupiter) + "kg" )
}
else
{
    document.write("Debes ingresar un número DUH!!")
}

