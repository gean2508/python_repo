#include <iostream>
#include<fstream>
using namespace std;


    /*      Nuestro siguiente reto es marcar en el mapa la posición del jugador, la manera de hacer esto es poniendo un número que represente
        donde va a aparecer al inicio, interpretarlo en la lectura del archivo y asignarlo a la posición del jugador para que funcione correctamente.
        (Spoilers abajo)

        Tips:

            1_Modificar el archivo del mapa asignando un símbolo único que represente donde va a aparecer el personaje (con un ‘3’ por ejemplo).
            2_Cargar las líneas del archivo usando fstream e iterar con un for carácter por carácter.
            3_Cuando se encuentra con el símbolo único ‘3’ guardar la posición de la fila y la columna ( la línea y el índice del for).
            4_Pasarle esos datos al jugador ya sea directamente con una referencia o leyendo los valores en variables de la clase.
            5_Dibujar el mapa.
*/

    //crear el mapa
    //el jugador
    //posicionar el jugador en el mapa

using namespace std;
//funcion que dibuja dependiendo la posicion de mi heroe 'h'
void drawMap(int heroPosX,int heroPosY, char map[5][5])
    {
        for(int i = 0;i < 5; i++)//para columnas
        {
            for(int p =0; p < 5; p++)
            {

                if(i != heroPosY)
                    {
                        cout<<map[p][i];
                    }else
                        {
                            if(p != heroPosX)
                                {
                                cout << map [p][i];
                                }else
                                    {
                                        cout<<'H';
                                    }


                        }



            }
                cout<<endl;
        }


    };



int main()
{
    int characterPosX;
    int characterPosY;
    int heroPosX = 1;
    int heroPosY= 1;
    char input = ' ';
    bool gameOver = false;
    //columnas| filas
    char map[5][5] =
    {
        {'-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-'}

    };
    drawMap(heroPosX,heroPosY,map);

    while(gameOver == false)
    {
        cin >> input;

        if(input == 'd')
            {
                heroPosX+=1 ;
            }
        else if(input == 'a')
            {
                heroPosX -= 1;
            }
        else if (input == 'p')
            {
                gameOver = true;
            }
         else if (input == 'w')
             {
                heroPosY -= 1;
             }
         else if (input == 's')
            {
                heroPosY +=1;
            }
        drawMap(heroPosX,heroPosY,map);

    };

    return 0;
}




