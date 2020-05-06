#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>

main (void)
{
	int *pA;
	pA=(int *) malloc(8*sizeof(int));
	pA[1]=12;
	*(pA)=15;
	printf("%i",*(pA));
	printf("\n%i",pA[1]);	
free(pA);
}
