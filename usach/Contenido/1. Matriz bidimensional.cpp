#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
main (void)
{
    int x=8;
    int y=6;

	int A[x][y],*pA;
	pA=&A[0][0];

	for (int i=0;i<x;i++)
		{
		for (int j=0;j<y;j++)
			{
			*(pA+y*i+j)=4*i+2*j+2;
			}	
		}
	for (int i=0;i<x;i++)
		{
		for (int j=0;j<y;j++)
			{
			printf("%3i",*(pA+y*i+j));
			}
		printf("\n");
		}
	printf("\n\n");
	
	printf("%i",*(pA+y*0+0));
	
}

