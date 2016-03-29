#include <iostream>

using namespace std;

int numero, valor;

void datos(int &numero)
{
    cout<<"Ingresar un numero";
    cin>>numero;
}

int num(int &numero,int &valor)
{
    valor=datos(numero);
    return valor;
}

int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=5;i<j;j--)
        {
            datos(numero);
            num(numero, valor);
        }
    }

    return 0;
}
