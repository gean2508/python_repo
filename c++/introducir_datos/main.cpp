#include <iostream>

using namespace std;

int main()
{
    int Edad = 0;

    cout<< "¿Qué edad tienes?" <<endl;

    cin >> Edad;

    cout<< "Tu edad es: "<< Edad<<endl;


    //multiplica numeros
    //ngresados por el user
    int numero = 0;
    int numero1 = 0;

    cout<< "Ingresa el multiplicando: " <<endl;
    cin >> numero;

    cout<< "Muy bien, ahoora ingresa el multiplicador: " <<endl;
    cin >> numero1;


    cout<< "El producto de: "<<numero <<" y "<<numero1<< " es: "<< (numero * numero1)  <<endl;



    return 0;
}
