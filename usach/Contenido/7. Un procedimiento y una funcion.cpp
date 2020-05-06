#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
 	void procedimiento (int x, int y)
{
	printf("%i",x*y+x+2);	
}

	int funcion (int z, int w)
{
	int aux=0;
	aux=z*w+z+2;
	return aux;
}
	main (void)
{
	int a=5, b=6;
	int r=0;

	procedimiento(a,b);
	printf("\n");
	r=funcion(a+b, a-b);
	printf("%i",r);
}
