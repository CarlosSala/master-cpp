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
	
	char **f;

	f=(char **) calloc(13,sizeof(char*));
	
	for (int j=0;j<13;j++) *(f+j)=(char *) calloc(13,sizeof(char));
	
	f[0][0]='Y';
	f[0][1]='o';	
	f[1][0]='A';
	f[1][1]='p';	
	f[1][2]='r';
	f[1][3]='u';	
	f[1][4]='e';
	f[1][5]='b';	
	f[1][6]='o';
	f[1][7]=' ';	
	f[1][8]='l';
	f[1][9]='a';	
	f[2][0]='A';
	f[2][1]='s';	
	f[2][2]='i';
	f[2][3]='g';	
	f[2][4]='n';
	f[2][5]='a';	
	f[2][6]='t';
	f[2][7]='u';	
	f[2][8]='r';
	f[2][9]='a';	
	f[2][10]=' ';
	f[2][11]='d';	
	f[2][12]='e';
	f[3][0]='P';
	f[3][1]='r';
	f[3][2]='o';	
	f[3][3]='g';
	f[3][4]='r';	
	f[3][5]='a';
	f[3][6]='m';	
	f[3][7]='a';
	f[3][8]='c';	
	f[3][9]='i';
	f[3][10]='o';	
	f[3][11]='n';
	f[4][0]='d';	
	f[4][1]='e';
	f[5][0]='A';	
	f[5][1]='p';
	f[5][2]='l';	
	f[5][3]='i';
	f[5][4]='c';	
	f[5][5]='a';
	f[5][6]='c';	
	f[5][7]='i';
	f[5][8]='o';	
	f[5][9]='n';
	f[5][10]='e';	
	f[5][11]='s';	
			
	for (int i=0;i<6;i++)
		{
			for (int j=0;j<13;j++)
			{
				printf("%c",*(*(f+i)+j));
			}
		printf("\n");
		}
		free(f);
	final=clock();
	printf("\n %d mseg", final-inicio);
		getch();
}

