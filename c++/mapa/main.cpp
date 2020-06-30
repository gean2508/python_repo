#include <iostream>

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

    int heroPosX = 1;
    int heroPosY= 1;
    char input = ' ';
    bool gameOver = false;
    //columnas| filas
    char map[5][5] =
    {
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'}
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
