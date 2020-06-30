#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     //ofstream crea e .txt en la carpeeta
     //ofstream es para salida de datos
    ofstream myFile("gameData.txt");
    int heroe;
    string heroePrint = " ";
    string id = " ";
    cout<<" ¿Qué héroe quieres ser?: "<<endl;
    cout<<" 1: Mago, 2: Gigante, 3: Arquero "<<endl;
    cin >> heroe;

    if(heroe == 1)
    {
         heroePrint = "Mago";
    }
    else if(heroe == 2)
    {
         heroePrint = "Gigante";
    }
    else if(heroe == 3)
    {
        heroePrint = "Arquero";
    }else
        {
            cout<<" Vaya!, El héroe que buscas no a sido encontrado "<<endl;
        }


    cout<<" ¿Cómo se va a llamar tu? "<<heroePrint<<endl;
    cin >>id;
    //-------------------------como escribir en el .txt que acabamos de crear
    if(myFile.is_open())
    {
        myFile << "Hola "<<id<<" Bienvenido! "<<endl;

        myFile <<"userId: "<<id<<endl;
        myFile <<"heroe_tipo: "<<heroePrint;

    }
    //le dice al Os que ya no vas usar el myFIle
    myFile.close();




    //---------------------------COMO LEER ARCHIVOS<

    ifstream myFileRead("gameData.txt"); //entrada de datos
    string line;
    if (myFileRead.is_open())
    {
        //getline es una funcion de los caracteres ue te permite conseguir
        //una inea de caracteres en algun flujo de datos hasta que haya un punto y aparte

        while(getline(myFileRead, line))
        {
            cout << line <<endl;
        }

    }else
        {
            cout<<" No pude abrir el archivo :( "<<endl;
        }





    return 0;
}
