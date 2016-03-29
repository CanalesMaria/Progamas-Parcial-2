#include <iostream>

using namespace std;
/*
Se tiene que ingresar 5 numeros a un arreglo.
Elaborar un procedimiento para devolver el numero de
pares e impares.

Una funcion para contar los numeros mayores a 100.
*/
int numero[5], x, y, mayor;

void datos(int numero[])
{
    int i;
    for(i=1;i<=5;i++)
    {
        cout<<"Ingresar un numero...";
        cin>>numero[i];
    }
}

void parimp(int numero[], int x, int y)
{
    x=0;
    y=0;
    int i;
    for(i=1;i<=5;i++)
    {
        if (numero[i]%2==0)
        {
            x++;
        }
        else if (!(numero[i]%2==0))
        {
            y++;
        }
    }
    cout<<"Numeros pares..."<<x<<"\n";
    cout<<"Numeros impares..."<<y<<"\n";
}

int rango(int numero[])
{
    int i;
    int n=0;
    for(i=1;i<=5;i++)
    {
        if(numero[i]>100)
        {
            n++;
        }
    }
    return n;
}

int main()
{
    datos(numero);
    parimp(numero, x, y);
    mayor = rango(numero);
    cout<<"Mayores a 100..."<<mayor<<"\n";


    return 0;
}
