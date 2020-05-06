#  include <windows.h>
#  include <time.h>
#  include <stdio.h>
#  include <stdlib.h>
#  include <string.h>
#  include <math.h>
#  include <pthread.h>
#  include <iostream>
#  include <conio.h>
#  include <fstream>

void inicializar(int *a, int x, int y, int z)
{
for (int k=0;k<z;k++)	
for (int i=0;i<x;i++)
for (int j=0;j<y;j++) *(a+y*i*z+z*j+k)=i+2*j+1*k+3;
}

void mostrar(int *a, int x, int y, int z)
{
for (int k=0;k<z;k++)
{
for (int i=0;i<x;i++)
{
for (int j=0;j<y;j++)
{
printf("%3i",*(a+z*y*i+z*j+k));
}
printf("\n");
}
printf("\n");
}
} 

main (void)
{
	int X=4,Y=5,Z=2;
	int cato[X][Y][Z], *pcato;
	pcato=&cato[0][0][0];
	
	
	inicializar(pcato, X,Y,Z);
	mostrar(pcato,X,Y,Z);
	
}
















