#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

void inicializar (int *a, int x, int y, int v)
{
srand((unsigned)time(0));	
for (int i=0;i<x;i++)
	{
	for(int j=0;j<y;j++)
		{
		*(a+y*i+j)=rand()%v;
		}
	}
}

void mostrar (int *a, int x, int y)
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
	
	clock_t inicio;	
    clock_t final;
    
	int x=0;
	int y=0;
	int q=0;
	int z=0;
	
	printf(" MATRIZ BIDIMENSIONAL\n\n");
	printf(" Decida el numero de filas: ");
	scanf("%i",&x);
	printf(" Decida el numero de columnas: ");
	scanf("%i",&y);
	printf(" Valor maximo de valores aleatorios: ");
	scanf("%i",&q);
	printf("\n");	

	int cato[x][y], *pcato;
	pcato=&cato[0][0];
    inicio=clock();
	inicializar(pcato,x,y,q);
	mostrar(pcato,x,y);
	getch();
	
	printf("\n Ingrese un valor y sera buscado en la matriz: ");
	scanf("%i",&z);
	
	for(int i=0;i<x;i++)
	for(int j=0;j<y;j++) if (cato[i][j]==z)
	{
	printf(" %i,%i (i,j)",i,j);
	}
    
	final=clock();
	printf("\n %d mseg.", final-inicio);
	getch();
	}
}

