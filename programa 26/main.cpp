#include <iostream>

using namespace std;
int numero[5];

void dato(int numero[])
{
    int i;
    for(i=1;i<=5;i++)
    {
        cout<<"Ingrese un numero";
        cin>>numero[i];
    }
}

void presentar(int numero[])
{
    int i;
    for(i=1;i<=5;i++)
    {
         cout<<numero[i]<<"\n";
    }
}

int main()
{
    dato(numero);
    presentar(numero);

    return 0;
}
