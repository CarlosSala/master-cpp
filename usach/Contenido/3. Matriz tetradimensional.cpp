#include<iostream>
#include<stdio.h>
#include<conio.h>

/* (pcato+(W*Z*Y*i)+(W*j*Z)+(k*W)+l) */
main(void)
{
	int X=4;
	int Y=5;
	int Z=2;
	int W=2;
	
	int cato[X][Y][Z][W],*pcato;
	pcato=&cato[0][0][0][0];
	
	for(int k=0;k<Z;k++)
	for(int i=0;i<X;i++) 
	for(int j=0;j<Y;j++) 
	for(int l=0;l<W;l++) *(pcato+W*Z*Y*i+W*j*Z+k*W+l)=i+2*j+l*k+3;
	
	for (int k=0;k<Z;k++)  
	{						
	for (int i=0;i<X;i++)
	{
	for (int j=0;j<Y;j++)
	{
	for(int l=0;l<W;l++)
	{
 	printf("%4i",*(pcato+W*Z*Y*i+W*j*Z+k*W+l));
	}
	printf("\n");
	}
	printf("\n");
	}
	printf("\n");
	}
	printf("%i", *(pcato+W*Z*Y*0+W*0*Z+0*W+0));
	printf("\n\n");
	getch();
	return 0;
}
