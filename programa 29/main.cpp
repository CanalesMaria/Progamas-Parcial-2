#include <iostream>

using namespace std;
/*Elaborar un procedimiento para ingresar 5 numeros
enteros comprendidos entre 1-10 a un arreglo.
Elaborar una funcion para obtener el factorial
de un numero.
Luego calcular el factorial de cada uno de los numeros
del arreglo y presentarlo, se debera de llamar
 la funcion del factorial para hacer el calculo
por cada numero del arreglo.
Usar un void para realizar este procedimiento.*/

int numero[5], i, x=0;

void datos(int numero[])
{
    for(i=0;i<5;i++)
    {
        do
        {
            cout<<"Ingresar un numero entre 1-10....";
            cin>>numero[i];
        }
        while (!((numero[i])>=1 and (numero[i])<=10));
    }
}

int fact(int numero[], int i)
{
    int k, x=1;
    for(k=1;k<=numero[i];k++)
    {
        x=x*k;
    }

    return x;
}

void factorial(int numero[], int &i, int &x)
{
    for (i=0;i<5;i++)
    {
        x=fact(numero,i);
        cout<<"Factorial de posicion "<<i<<"...."<<x<<"\n";
    }
}

int main()
{
    datos(numero);
    factorial(numero, i, x);

    return 0;
}
