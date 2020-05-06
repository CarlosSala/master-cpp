#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>

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
int X=6;
int Y=6;

int cato[X][Y], *pcato;
pcato=&cato[0][0];

inicializar(pcato,X, Y);
mostrar(pcato, X, Y);
}

