#include <iostream>
#include <fstream>
using namespace std;
void DrawMap (int PlayerPosX, int PlayerPosY, char GameMap[5][5])
{

    for (int i =0; i < 5; i ++)
    {
        for (int j = 0; j<5; j ++)
        {
            if (i != PlayerPosY)
            {
                cout << GameMap [j][i];
            }
            else
            {
                if (j != PlayerPosX)
                {
                    cout << GameMap [j][i];
                }else{
                    cout << 'H';
                }
            }
        }
        cout << endl;
    }
}
int LocMap (int &PlayerX, int &PlayerY)
{
    int x,y;
    bool GameOver = false;
    char Input = ' ';
    char GameMap [5][5] =
    {
        {'.','.','.','.','.'},
        {'.','.','.','.','.'},
        {'.','.','.','.','.'},
        {'.','.','.','.','.'},
        {'.','.','.','.','.'},
    };
    while (GameOver == false)
    {
        DrawMap(PlayerX,PlayerY, GameMap);
        cin >> Input;
        if (Input == 'd')
        {
            PlayerX ++;
            if (PlayerX > 4)
            {
                GameOver= true;
                cout << "Fin del juego" << endl;
            }
        }
        else if(Input == 'a')
        {
            PlayerX -- ;
            if (PlayerX <0 )
            {
                GameOver= true;
                cout << "Fin del juego" << endl;
            }
        }
        else if(Input == 'w')
        {
            PlayerY --;
            if (PlayerY <0 )
            {
                GameOver= true;
                cout << "Fin del juego" << endl;
            }
        }
         else if(Input == 's')
        {
            PlayerY ++;
            if (PlayerY > 4 )
            {
                GameOver= true;
                cout << "Fin del juego" << endl;
            }
        }
        else if (Input == 'g'){
            GameOver= true;
            x = PlayerX;
            y = PlayerY;
            return x;
            return y;
        }
    }
}
int CreateFile (int &x,int &y)
{
    ofstream MyFile("Gamedatamap.txt");

    if (MyFile.is_open())
    {
        MyFile << "Coordenadas"<<endl;
        MyFile << x << endl;
        MyFile << y << endl;
    }
    MyFile.close();
}
int OpenFile (int &x , int &y)
{
    cout << "Cargando partida..." << endl;

    ifstream MyFileRead ("Gamedatamap.txt");
    string line = "";
    int renglon = 1;
    cout << "Hola Aventurero!!!"<<endl;
    cout<<endl;
    if (MyFileRead.is_open())
    {
        while (getline(MyFileRead, line))
        {
            if (renglon == 2)
            {
                x = atoi(line.c_str());

            }
            else if (renglon == 3)
            {
                y = atoi(line.c_str());

            }
            renglon ++;
        }
    }else
    {
    cout << "Error" << endl;
    }
}
int main()
{
    int locx=0, locy=0;
    int opciones;
    char save = ' ';

    cout << "--------OPCIONES--------" << endl;
    cout << "*. Crear nueva partida"<< endl;
    cout << "*. Cargar partida "<< endl;
    cout << "------------------------"<< endl;
    cin >> opciones;
    switch (opciones)
    {
        case1:
            CreateFile(locx,locy);
            break;
        case2:
            OpenFile(locx,locy);
            break;
        default:
            cout<< "aplicacion cerrada" << endl;
            break;
    }
    if (locx > 4)
    {
        locx --;
    }
    else if (locx < 0)
    {
        locx ++;
    }
    else if (locy > 4)
    {
        locy --;
    }
    else if (locy < 0)
    {
        locy ++;
    }
    cout<<"Inicio posicion x "<<locx<<endl;
    cout<<"Inicio posicion y "<<locy<<endl;
    do
    {
        LocMap(locx,locy);
        cout << "Para guardar y salir oprima s" << endl;
        cin >> save;
    }
    while(save != 's');
    CreateFile(locx,locy);
    return 0;
}
