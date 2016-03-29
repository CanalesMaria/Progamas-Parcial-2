#include <iostream>

using namespace std;

int numero[5], pares;
double promx;

void datos(int numero[])
{
    int i;
    for(i=1;i<=5;i++)
    {
        cout<<"Ingresar un numero....";
        cin>>numero[i];
    }
}

double promedio(int numero[])
{
    int i;
    double prom=0;
    for(i=1;i<=5;i++)
    {
        prom=prom+numero[i];
    }
    prom=prom/5;
    return prom;
}

int par(int numero[])
{
    int i, x=0;
    for(i=1;i<=5;i++)
    {
        if ((numero[i])%2==0)
        {
            x++;
        }
    }
    return x;
}

int main()
{
    datos(numero);
    promx = promedio(numero);
    pares = par(numero);
    cout<<"El promedio de los numeros es...."<<promx<<"\n";
    cout<<"La cantidad de numeros pares es...."<<pares<<"\n";

    return 0;
}
