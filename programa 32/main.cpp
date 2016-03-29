#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
Crear un arreglo de 3x3, y guardar numeros aleatorios
entre 1-100, luego presentar el arreglo.
Dejar reservada la ultima linea para la suma de las columnas.
*/

using namespace std;
const int lin=4;
const int col=3;

int num[lin][col];

void ingreso(int num[lin][col])
{
    for(int l=0;l<lin-1;l++)
    {
        for(int c=0;c<col;c++)
        {
            num[l][c]=1 + rand() % (100-1);
        }
    }
}

void sumarcolumnas(int num[lin][col])
{
    int ul=lin-1;
    for(int c=0;c<col;c++)
    {
        for(int l=0;l<lin-1;l++)
        {
            num[ul][c] += num[l][c];
        }
    }
}

void ingreso2(int num[lin][col])
{
    for(int l=0;l<lin-1;l++)
    {
        for(int c=0;c<col;c++)
        {
            cout<<"Numero ["<<l<<"]["<<c<<"]..";
            cin>>num[l][c];
        }
    }
}

void presentar(int num[lin][col])
{
    for(int l=0;l<lin;l++)
    {
        for(int c=0;c<col;c++)
        {
            cout<<num[l][c]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    ingreso2(num);
    sumarcolumnas(num);
    presentar(num);

    return 0;
}
