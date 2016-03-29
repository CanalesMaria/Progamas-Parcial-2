#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
const int lin=3;
const int col=4;

int num[lin][col];

void generar(int num[lin][col])
{
    int l,c;
    for(l=0;l<lin;l++)
    {
        for(c=0;c<col-1;c++)
        {
            num[l][c] = 1 + rand() % (100-1);
        }
    }
}

void mayor(int num[lin][col])
{
    int l, c, ul=col-1;
    for(l=0;l<lin;l++)
    {
        for(c=0;c<col-1;c++)
        {
            if(num[l][c]>num[l][ul])
            {
                num[l][ul]=num[l][c];
            }
        }
    }
}

void presentar(int num[lin][col])
{
    int l,c;
    for(l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<num[l][c]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    srand(time(0));
    generar(num);
    mayor(num);
    presentar(num);

    return 0;
}
