#include <iostream>

using namespace std;

int main()
{
    //while: perimite repetir coidgo mientras la condicion sea true
    //do while: ejecutta prmero el codigo y luego comprueba si la condicion es true
    //for:  tiene 3 partes
    //inicializacion: es obligatorio aui escribimos un poco de coidgo
    //condición (si es verdadera ejecuta el bloque de código)
    //la actualización del contador (donde actualizamos nuestro código para comprobar si la condición se
    //sigue cumpliendo o si ya podemos acabar la repetición).


    //---------------------primer loop  while

    //int counter = 0;
    //while(counter <= 100)
    //{
      //  cout<< counter <<endl;
     //   counter = counter +1;
    //}


    //------------------segundo loop do while
    bool isHappy = true;
    char input = ' ';


    do
    {
        cout<<"c:"<<endl;
        cout<<" Sigues feliz? (t/f)"<<endl;
        cin >> input;

        if(input == 'f')
        {
            isHappy = false;
            cout << "Espero se te pase pronto :("<<endl;
        }

    }while(isHappy == true);







    //---------------------------tercer loop for
    for(int i = 0; i < 100; i++)
    {
        cout<<i<<endl;
    }






    return 0;
}
