#include <iostream>
//debemos tener cuidado con los limites de nuestros arreglos
using namespace std;

int main()
{
    char Corbatas[5];


    Corbatas[0] = 'v';
    Corbatas[1] = 'n';
    Corbatas[2] = 'p';
    Corbatas[3] = 'r';
    Corbatas[4] = Corbatas[2];
    cout<<Corbatas[0]<<endl;
    cout<<Corbatas[1]<<endl;
    cout<<Corbatas[2]<<endl;
    cout<<Corbatas[3]<<endl;
    cout<<Corbatas[4]<<endl;

    int index = 0;
    cin >> index;

    string Names[4] = {"Gean", "Carlos", "Ruin", "Ana"};
    string currentName = Names[index];

    cout<<currentName<<endl;








    return 0;
}