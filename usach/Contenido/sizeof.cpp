#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>

main(void){
	int x;
	x=sizeof(int);
	printf("%i int",x);
	x=sizeof(double);
	printf("\n%i double",x);
	x=sizeof(short);
	printf("\n%i short",x);
	x=sizeof(bool);
	printf("\n%i bool",x);
	x=sizeof(long);
	printf("\n%i long",x);
	x=sizeof(float);
	printf("\n%i float",x);

	printf("\n");

	int *p;
	p=(int *) malloc(4*sizeof(int));

	*p=12;
	*(p+1)=40;
	*(p+2)=56;
	*(p+3)=67;
	
	for (int i=0;i<4;i++) printf("\n%i",*(p+i));
	
	free(p);
	
}
