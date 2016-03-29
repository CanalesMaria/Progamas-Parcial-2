#include <iostream>

using namespace std;
/*
Ingresar 5 numeros a un arreglo usando un void.
Luego elaborar una funcion para devolver el promedio
de los numeros impares del arreglo.
Una funcion para determinar cuantos numeros estan
entre 50-100.

2 Elaborar un procedimiento para ingresar 5 numeros
enteros comprendidos entre 1-10 a un arreglo.
Elaborar una funcion para obtener el factorial
de un numero.
Luego calcular el factorial de cada uno de los numeros
del arreglo y presentarlo, se debera de llamar
 la funcion del factorial para hacer el calculo
por cada numero del arreglo.
Usar un void para realizar este procedimiento.
*/

int numero[5], rangox;
double promedio;

void datos(int numero[])
{
    int i;
    for (i=1;i<=5;i++)
    {
        cout<<"Ingresar un numero....";
        cin>>numero[i];
    }
}

double promimp(int numero[])
{
    int i, y=0;
    double x=0;
    for (i=1;i<=5;i++)
    {
        if(!(numero[i]%2==0))
           {
               x=x+numero[i];
               y++;
           }
    }
    x=x/y;
    return x;
}

int rango(int numero[])
{
    int i, x=0;
    for (i=1;i<=5;i++)
    {
        if ((numero[i]>=50) and (numero[i]<=100))
        {
            x++;
        }
    }
    return x;
}

int main()
{
    datos(numero);
    promedio = promimp(numero);
    rangox = rango(numero);
    cout<<"El promedio de impares es...."<<promedio<<"\n";
    cout<<"Numeros entre 50-100...."<<rangox<<"\n";

    return 0;
}
