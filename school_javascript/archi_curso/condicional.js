alert('si vale');
const op1 = piedra;
const op2 = papel;
const op3 = tijera;
//const user = 'Geanca
//const cpu = 'Siri'

let result = function(user, cpu) {
	if (user != cpu){
		if(user === op1 && cpu === op2){
			console.log('Ha ganado '+ ${cpu} + 'con' ${op2} )	
		} else if(user === op2 && cpu === op1){
                        console.log('Ha ganado '+ ${user} + 'con' ${op2} ) //papel vs piedra
                } else if(user === op1 && cpu === op3){
                        console.log('Ha ganado '+ ${user} + 'con' ${op1} )//termina piedra
                } else if(user === op2 && cpu === op3){
                        console.log('Ha ganado '+ ${cpu} + 'con' ${op3} )//termina papel
                } 
	}else (user == cpu){
	console.log(${user}+ " " + ${cpu} + "Elijieron la misma opcion por ende empataron")}
result(op1, op2)
