#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int generarPar()
{
    int num=0;
    do
    {
        num=1+rand() % (100-1);
    }
    while (!((num<=100) and (num%2==0)));
    return num;
}

void ingreso(int numero[])
{
    int i=0;
    for(i=0;i<5;i++)
    {
        numero[i] = generarPar();
    }
}

int contarM50(int numero[])
{
    int i=0, c=0;
    for(i=0;i<5;i++)
    {
        if(numero[i]>50)
        {
            c++;
        }
    }
    return c;
}

void presentar(int numero[])
{
    int i=0;
    for (i=0;i<5;i++)
    {
        cout<<"Numero ["<<i<<"]"<<numero[i]<<"\n";
    }
}

int numero[5];
int contador;

int main()
{
    srand(time(0));
    ingreso(numero);
    presentar(numero);
    contador=contarM50(numero);
    cout<<"Mayores a 50 "<<contador<<"\n";

    return 0;
}
