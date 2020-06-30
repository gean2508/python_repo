#include <iostream>

using namespace std;

int main()
{
    //-----------------------------------------clases
    //molde de galleta
    //instancia de esta clase: masa de galletas y vamos a usar el molde
    //intancia= galletas

    class cat{
        public:
            string name;

            cat(){
                name = "Akamaru";
            }

    };

        cat myFirstKitty;
        cout<<myFirstKitty.name <<endl;

    return 0;
}
