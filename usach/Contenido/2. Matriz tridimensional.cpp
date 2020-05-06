#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

main (void)
{
	int X=4;
	int Y=2;
	int Z=5;
	
	int cato[X][Y][Z], *pcato;
	pcato=&cato[0][0][0];
	
	for (int k=0;k<Z;k++)
	for (int i=0;i<X;i++)
	for (int j=0;j<Y;j++)  *(pcato+Y*i*Z+Z*j+k)=i+2*j+1*k+3;
		
	for (int k=0;k<Z;k++)  
	{						
	for (int i=0;i<X;i++)
	{
	for (int j=0;j<Y;j++)
	{
 	printf("%3i",*(pcato+Y*Z*i+Z*j+k));	
	}
	printf("\n");
	}
	printf("\n");
	}
		
	printf("%i",*(pcato+Y*Z*1+Z*1+1));
}
