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
	int x=0;
	int y=0;
	printf(" MATRIZ BIDIMENSIONAL\n\n");
	printf(" Decida el ancho de la matriz: ");
	scanf("%i",&y);
	printf(" Decida el largo de la matriz: ");
	scanf("%i",&x);
	getch();
	printf("\n");	

	int cato[x][y], *pcato;
	pcato=&cato[0][0];

	inicializar(pcato,x,y);
	mostrar(pcato,x,y);
	getch();
	
	int z=0;
	printf("\n Ingrese un valor y sera buscado en la matriz: ");
	scanf("%i",&z);
	
	for(int i=0;i<x;i++)
	for(int j=0;j<y;j++) if (i*2+j*3+1==z)
	{ 
	printf("\n Las coordenadas del valor son las siguientes: \n");
	printf(" %i,%i (i,j)",i,j);
	}
	getch();
	}
	}

