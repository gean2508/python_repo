#include <iostream>

using namespace std;

int main()
{
    //tipo de dato nombre_variable asignacion
    int month = 12;
    char MiInicial = 'gean';
    int day = 4;
    float  pi = 3.1416;
    bool GameOver = false;
    int Suma = month + day;
    int Suma1 = month * day;
    cout<< MiInicial <<endl;
    cout << "El jugador ya oerdió?" <<endl;
    cout<< GameOver<<endl;
    cout << month << endl;
    cout << day << endl;
    cout << pi <<endl;

    //operadores
    cout<< Suma <<endl;
    cout<< Suma1 <<endl;

    //apuntadores >  *  <
    //direccion >  &  <
    int direccion = 3509;
    cout<< direccion <<endl;

    int* ApuntadorDir;
    ApuntadorDir = &direccion;
    cout<< ApuntadorDir <<endl;





    return 0;
}
