
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>

main(void){


	int **f;

	f=(int **) malloc(4*sizeof(int*));
	
	for (int j=0;j<4;j++) *(f+j)=(int *) malloc(5*sizeof(int));
	
	for (int i=0;i<4;i++) 
	for (int j=0;j<4;j++) *(*(f+i)+j)=i+j;	
	
	for (int i=0;i<4;i++)
		{
			for (int j=0;j<4;j++)
			{
				printf("%2i",*(*(f+i)+j));
			}
		printf("\n");
		}
		free(f);
}
