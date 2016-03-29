#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int lin=4;
const int col=4;

int num[lin][col];

void generar(int num[lin][col])
{
    int l, c;
    for(l=0;l<lin-1;l++)
    {
        for(c=0;c<col;c++)
        {
            num[l][c] = 1 + rand() % (100-1);
        }
    }
}

void prompar(int num[lin][col])
{
    int l, c, x=0;
    int ul=lin-1;
    for(c=0;c<col;c++)
    {
        x=0;
        for(l=0;l<lin-1;l++)
        {
            if (num[l][c]%2==0)
            {
                x++;
                num[ul][c] += num[l][c];
                num[ul][c] = (num[ul][c])/x;
            }
        }
    }
}

void presentar(int num[lin][col])
{
    int l, c;
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
    prompar(num);
    presentar(num);

    return 0;
}
