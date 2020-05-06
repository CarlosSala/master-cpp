#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#define f(x) x*x+2; 
#define pi 3.1415; 
#define MALLOC(x) (x*)malloc(sizeof(x));

main (void)
{
	int *a;
	a=(int *)calloc(4,sizeof(int));
	*a=12;
	*(a+1)=40;
	*(a+2)=56;
	*(a+3)=67;
	for (int i=0;i<4;i++) printf("%i ",*(a+i));
	free(a);

int *p;
	p=(int *)malloc(4*sizeof(int));
	*p=12;
	*(p+1)=40;
	*(p+2)=56;
	*(p+3)=67;
	for (int i=0;i<4;i++) printf("%i ",*(p+i));
	free(p);

	*p=f(2);
	printf("%i",*(p));
	
	free(p);

}

