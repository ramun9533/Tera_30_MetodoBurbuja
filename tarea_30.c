#include <stdio.h>


void main()
{
int i,j,TAM=20;	
int lista[]={12,10,5,6,1,3,30, 28, 11, 96, -5, 21, 18, 12, 22, 30, 97, -1, -40, -500, 99, 100};	
int temp=0; 			 
		 

printf("La lista DESORDENADA es: \n");

for (i=0;i<TAM;i++)
   printf("%3d",lista[i]);	

for (i=1;i<TAM;i++)
{
	for (j=0;j<TAM-1;j++)
	{
		if (lista[j] > lista[j+1])	 
		{
			temp = lista[j];	
			lista[j]=lista[j+1];  
			lista[j+1]=temp;	
	}

}

printf("\nLos valores ORDENADOS de lista son: \n");
for(i=0;i<TAM;i++)
    printf("%3d",lista[i]);



}

}