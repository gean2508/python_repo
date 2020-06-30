#include <iostream>
#include <string>

using namespace std;

int main()
{

    int Math;
    int Sociales;
    int Quimica;
    int Fisica;

    cout<<"Ingresa tu nota en Math: "<<endl;
    cin >> Math;
    cout<<"Ingresa tu nota en Sociales: "<<endl;
    cin >> Sociales;
    cout<<"Ingresa tu nota en Quimica: "<<endl;
    cin >> Quimica;
    cout<<"Ingresa tu nota en Fisica: "<<endl;
    cin >> Fisica;


    if(Math >= 6)
    {
        cout<< "Math: "<<" aprobado" <<endl;
    } else
        {
           cout<< "Math: "<<" reprobado" <<endl;
        }



     if(Sociales >= 6)
    {
        cout<< "Sociales: "<<" aprobado" <<endl;
    } else
        {
           cout<< "Sociales: "<<" reprobado" <<endl;
        }

     if(Quimica >= 6)
    {
        cout<< "Quimica: "<<" aprobado" <<endl;
    } else
        {
           cout<< "Quimica: "<<" reprobado" <<endl;
        }


     if(Fisica >= 6)
    {
        cout<< "Fisica: "<<" aprobado" <<endl;
    } else
        {
           cout<< "Fisica: "<<" reprobado" <<endl;
        }




        //switch manda el valor directamente al case que le corresponda
        //si es que existe
        //break; es el freno de mi switch
        //default; sirve para
        //entra en caso de que ningun case se cumpla,
        //aqui podemos seguir con el flujo.
        string Nombre;
        cout<< " Ingresa tu nombre tu nombre: " <<endl;
        cin >> Nombre;
        cout<< " Hola "<<Nombre<<" Bienvenido... "  <<endl;
        switch(Math)
        {
            case 6:
                cout<<Nombre<<" Felicidades (: aprobaste" <<endl;
                break;


            case 5:
                cout<<Nombre<< " Te dije que estudies! " <<endl;
                break;




            case 10:
                cout<< " Al parecer "<<Nombre<< " Es un genio! " <<endl;
            break;


            default:
                cout<<" Ingresa un valor correcto "<<endl;
            break;
        }
    return 0;
}
