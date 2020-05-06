#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void nprimos(int K,int W, int Z)	
{
 while (W <= Z)
	 	{
	 	 if (Z%W==0)
	 	    {
		 	 K=K+1;
		    }
	 	 W=W+1;
	 	}
	if(K==2)
	  {
	  printf ("El numero es primo");	
	  }
	   else
	   	{
	   		printf ("El numero no es primo");	 
	   	}
}
main (void)
{
while (0<1)
{
system("cls");
printf("Inserte un Numero Entero:");
int Z=0;
scanf("%i",&Z);
int K=0;
int W=1;
nprimos(K,W,Z);
Sleep(2500);
}
}
