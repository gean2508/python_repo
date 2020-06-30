#include <iostream>

using namespace std;

int main()
{
    //reto: JUEGOS NARRATIVO
    //por: Funinja.
    //variables:
    //user, profesion, historia, deciciones(condicionales),


    string nombreUser;
    string profesion;
    string Lugar;


    cout<<"Hola, ¿cómo te llamas? "<<endl;
    cin >> nombreUser;

    cout<< "Bienvenido: "<<nombreUser<<endl;
    cout<<" ¿Qué te gustaria ser? "<<endl;
    cout<<" p: Piloto o b:Bombero "<<endl;
    cin >> profesion;
    cout<<" ¿En qué lugar quieres que se desarrolle la trama? "<<endl;
    cin >>Lugar;




    string p = "p";
    string b = "b";



    string profesion1 = profesion;
    //cout<<profesion1<<"SOYPROFESIONUNOOOOOOOO"<<endl;
    if(profesion1 == p)
        {
            profesion1 = "piloto";
            cout<<" Entendido "<<nombreUser<<" Desde ahora eres "<<profesion1<<endl;
        }
        else if (profesion1 == b)
            {
                profesion1 = "bombero";
                cout<<" Entendido "<<nombreUser<<" Desde ahora eres "<<profesion1<<endl;

            }
        else
        {
            cout<<" Solo se permiten letra: p y b. :) "<<endl;

        }


        if(profesion1 == "bombero")
        {

            string objetoF;

            cout<<nombreUser<< " era un "<<profesion1<<" muy respetado ya que tiempo atras había salvado a una niña en un gran incendio en "<< Lugar<<endl;
            cout<<nombreUser<<" Había hecho muchas cosas buenas en su trabajo pero de todas formas el no era feliz o al menos no del todo "<<endl;
            cout<<"¿Qué le falta a "<<nombreUser<<" para poder ser feliz? "<<endl;
            cin >> objetoF;
            cout<<" Lo que a  "<<nombreUser<< " le faltaba tener era un@ "<<objetoF <<endl;
            cout<<" ¿Podrá ? "<<nombreUser<<" recuperar su "<<objetoF<< ". Eso lo sabremos en un próximo capitulo" <<endl;


        }
        else if(profesion1 == "piloto")
            {
                string objetoF = "";

                cout<<nombreUser<< " era un "<<profesion1<<" muy respetado ya que tiempo atras había salvado a un piloto en un gran accidente aereo en "<<Lugar<<endl;
                cout<<nombreUser<<" Había hecho muchas cosas buenas como piloto pero de todas formas el no era feliz o al menos no del todo "<<endl;
                cout<<" ¿Qué le falta a "<<nombreUser<<" para poder ser feliz? "<<endl;
                cin >> objetoF;
                cout<<" Lo que a  "<<nombreUser<< " le faltaba tener era un@ "<<objetoF <<endl;
                cout<<" ¿Podrá ? "<<nombreUser<<" recuperar su "<<objetoF<< ". Eso lo sabremos en un próximo capitulo" <<endl;

            }

    return 0;
}
