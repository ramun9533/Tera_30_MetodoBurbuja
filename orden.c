#include <stdio.h>
void main()
{

// imprimira basura a principio, a veces,no se por que?
int vector [10]= {0,7,4,1,8,5,2,9,6,3};
int acum = 0;

for (int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            if (vector[j]>vector[j+1])
            {
            acum = vector[j];
            vector[j] = vector[j+1];
            vector[j+1] = acum;
            }
        }

    }
    for (int i=0;i<=9;i++)
        {
            printf("%d\t",vector[i]);
        }
        printf("\n");
        for (int i=0;i<=9;i++)
        {
            vector[9]=0;
        }
        acum =0;
}