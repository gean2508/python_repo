#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //ofstream crea e .txt en la carpeeta
    ofstream myFile("gameData.txt");
    //como escribir en el .txt que acabamos de crear
    if(myFile.is_open())
    {
        myFile << "Hola Gean_duv"<<endl;

        for(int i = 10; i >= 0; i-=1)
        {

            myFile << i << endl;

        }
        myFile << "Ignition...";

    }
    //le dice al Os que ya no vas usar el myFIle
    myFile.close();
    return 0;
}
