var op1 = "piedra";
var op2 = "papel";
var op3 = "tijera";

var resultado = function(player1, player2){
    if(player1 != player2){    
        if (player1 === op1 && player2 === op2){
            console.log(`Gana ${player2}`)
        } else if (player1 === op1 && player2 === op3){
            console.log(`Gana ${player1}`)
            
        } else if (player1 === op2 && player2 === op3){
            console.log(`Gana ${player2}`)
        } else if (player1 === op2 && player2 === op1){
            console.log(`Gana ${player1}`)
            
        } else if (player1 === op3 && player2 === op1){
            console.log(`Gana ${player2}`)
        } else if (player1 === op3 && player2 === op2){
            console.log(`Gana ${player2}`)
        }
    } else {
        console.log("EMPATE")
    }    
}

resultado(op1, op3)
