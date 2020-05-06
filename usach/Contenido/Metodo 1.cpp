#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>

	void inicializar2d (int *pi2d,int xi2d, int yi2d, int vI2D)
{
	
	srand((unsigned)time(0));
	 
		for (int i=0;i<xi2d;i++)
		{
		for (int j=0;j<yi2d;j++)
		{
		printf("%3i",*(pi2d+yi2d*i+j)=rand()%vI2D);
		}
		printf("\n");
}
}
 void mostrar2d (int*pi2d,int xi2d, int yi2d, int vI2D)
 {
 
 		for (int i=0;i<xi2d;i++)
		{
		for (int j=0;j<yi2d;j++)
		{
			printf("%3i",*(pi2d+yi2d*i+j));
			}
	printf("\n");
	}
	printf("\n\n");
	

}
main(void)
{
srand((unsigned)time(0));
clock_t inicio;
clock_t final;

float a=0;
a=rand();
int x=5;
int y=8;
int i2d[x][y], *pi2d;
pi2d=&i2d[0][0];

inicio=clock();


inicializar2d (pi2d,x,y,51);
mostrar2d(pi2d,x,y,51);

final=clock();

printf("%i\n",(int)a%10);
printf("%d mseg.\n", final-inicio);
}

