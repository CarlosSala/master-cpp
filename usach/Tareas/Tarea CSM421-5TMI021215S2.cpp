#include<iostream>
#include<stdio.h>
#include<conio.h>

/* (pcato+(W*Z*Y*i)+(W*j*Z)+(k*W)+l) */
main()
{
	int X=4;
	int Y=5;
	int Z=2;
	int W=2;
	
	int cato[X][Y][Z][W],*pcato;
	pcato=&cato[0][0][0][0];
	
	for(int i=0;i<X;i++) 
	for(int j=0;j<Y;j++) 
	for(int k=0;k<Z;k++) 
	for(int l=0;l<W;l++) 
	cato[i][j][k][l]= i+j+k+l*4+2;

	printf("%4i",cato[3][4][0][1]);
	printf("\n\n");
     
     
	printf("%4i",*(pcato+(2*2*5*3+2*4*2+0*2+1)));
	getch();
	return 0;
}
