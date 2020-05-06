#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void inicializar(int *a, int x, int y)
{
for(int i=0;i<x;i++)
for(int j=0;j<y;j++) *(a+y*i+j)=i*2+j*3+1;
}

void mostrar(int *a, int x, int y)
{
for(int i=0;i<x;i++)
{
for(int j=0;j<y;j++) 
{
printf("%3i",*(a+y*i+j));
}
printf("\n");
}
}

main (void)
{
	while (1>0)
	{
	system("cls");
	int x=2;
	int y=6;
	printf(" MATRIZ BIDIMENSIONAL\n\n");
	printf(" Decida el largo de la matriz: ");
	scanf("%i",&x);
	printf(" Decida el ancho de la matriz: ");
	scanf("%i",&y);
	printf("\n");	

	int cato[x][y], *pcato;
	pcato=&cato[0][0];

	inicializar(pcato,x,y);
	mostrar(pcato,x,y);
	getch();
	
	int i=0;
	int j=0;
	
	printf("\n Ingrese las coordenadas de un valor de la matriz\n\n");
	getch();
	printf(" Ingrese Fila:    ");
	scanf("%i",&i);
	printf(" Ingrese Columna: ");
	scanf("%i",&j);
	printf("\n Las coordenadas corresponden al valor ");
	printf("%i",*(pcato+y*i+j));
	printf(" de la matriz\n");
	getch(); 
	}
}
