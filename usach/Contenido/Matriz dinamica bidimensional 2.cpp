#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

main(void)
{
	clock_t inicio;	
    clock_t final;	
    inicio=clock();
    
	int **f;
f=(int **) calloc(13,sizeof(int*));
	
	for (int j=0;j<13;j++) *(f+j)=(int *) calloc(13,sizeof(int));
		
	f[1][0]=1;
	f[1][1]=1;	
	f[1][2]=1;
	f[1][3]=1;	
	f[2][0]=1;
	f[3][0]=1;	
	f[3][1]=1;
	f[4][0]=1;	
	f[5][0]=1;
	f[5][1]=1;		
	f[5][2]=1;
	f[5][3]=1;		

	for (int i=0;i<6;i++)
		{
			for (int j=0;j<13;j++)
			{
				if (f[i][j] !=0)
				{
				printf("% i",*(*(f+i)+j));
				}else{
				printf(" ");
				}
			}
		printf("\n");
		}
	
		free(f);
	final=clock();
	printf("\n %d mseg", final-inicio);
		getch();
}

