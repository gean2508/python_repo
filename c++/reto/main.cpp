#include <iostream>

using namespace std;

int main()
{
    //variables: radio
    //proceso: multiplicar radio
    //por si mismo para ponerle al cuadrado
    //despues multiplico por pi(3.1416)
    //inprimimos resultado
    cout<<"Hola vamos a calcular en area del circulo y una esfera que comparten el radio: "<<endl;

    float radio = 0;
    cout<< "Ingresa el valor del radio: " <<endl;
    cin >> radio;
    float pi = 3.1416;
    float AreaCirculo = (radio * radio) * pi;


    cout<<"Con un radio de : "<< radio <<endl;
    cout << "El area del circulo es: "<< AreaCirculo <<endl;

    //esfera
    //4pi*r2
    float AreaEsfera = (4 * pi) * (radio * radio);

    cout<< "El area de la esfera es: "<< AreaEsfera <<endl;





    return 0;
}
