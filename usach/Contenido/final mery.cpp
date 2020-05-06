#include<iostream>
#include<stdio.h>
#include<stdlib.h>

main (void)
{
char **pA;

pA=(char **)malloc(2*sizeof(char*));
*pA=(char *)malloc(2*sizeof(char));
*(*(pA+0)+0)='Y';
*(*(pA+0)+1)='O';
for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		printf("%c", *(*(pA+i)+j));
		}printf("\n");
	}
	
*(pA+1)=(char *)malloc(10*sizeof(char));
*(*(pA+1)+0)='A';
*(*(pA+1)+1)='P';
*(*(pA+1)+2)='R';
*(*(pA+1)+3)='U';
*(*(pA+1)+4)='E';
*(*(pA+1)+5)='B';
*(*(pA+1)+6)='O';
*(*(pA+1)+7)=' ';
*(*(pA+1)+8)='L';
*(*(pA+1)+9)='A';

for (int i=0;i<2;i++)
	{
		for(int j=0;j<10;j++)
		{
		printf("%c", *(*(pA+i)+j));
		}printf("\n");
	}
		
*(pA+2)=(char *)malloc(13*sizeof(char));
*(*(pA+2)+0)='A';
*(*(pA+2)+1)='S';
*(*(pA+2)+2)='I';
*(*(pA+2)+3)='G';
*(*(pA+2)+4)='N';
*(*(pA+2)+5)='A';
*(*(pA+2)+6)='T';
*(*(pA+2)+7)='U';
*(*(pA+2)+8)='R';
*(*(pA+2)+9)='A';
*(*(pA+2)+10)=' ';
*(*(pA+2)+11)='D';
*(*(pA+2)+12)='E';

for (int i=0;i<3;i++)
	{
		for(int j=0;j<13;j++)
		{
		printf("%c", *(*(pA+i)+j));
		}printf("\n");
	}	
	
*(pA+3)=(char *)malloc(12*sizeof(char));
*(*(pA+3)+0)='P';
*(*(pA+3)+1)='R';
*(*(pA+3)+2)='O';
*(*(pA+3)+3)='G';
*(*(pA+3)+4)='R';
*(*(pA+3)+5)='A';
*(*(pA+3)+6)='M';
*(*(pA+3)+7)='A';
*(*(pA+3)+8)='C';
*(*(pA+3)+9)='I';
*(*(pA+3)+10)='O';
*(*(pA+3)+11)='N';

for (int i=0;i<4;i++)
	{
		for(int j=0;j<12;j++)
		{
		printf("%c", *(*(pA+i)+j));
		}printf("\n");
	}	
	
*(pA+4)=(char *)malloc(2*sizeof(char));
*(*(pA+4)+0)='D';
*(*(pA+4)+1)='E';

for (int i=0;i<5;i++)
	{
		for(int j=0;j<2;j++)
		{
		printf("%c", *(*(pA+i)+j));
		}printf("\n");
	}	

*(pA+5)=(char *)malloc(12*sizeof(char));
*(*(pA+5)+0)='A';
*(*(pA+5)+1)='P';
*(*(pA+5)+2)='L';
*(*(pA+5)+3)='I';
*(*(pA+5)+4)='C';
*(*(pA+5)+5)='A';
*(*(pA+5)+6)='C';
*(*(pA+5)+7)='I';
*(*(pA+5)+8)='O';
*(*(pA+5)+9)='N';
*(*(pA+5)+10)='E';
*(*(pA+5)+11)='S';

for (int i=0;i<6;i++)
	{
		for(int j=0;j<12;j++)
		{
		printf("%c", *(*(pA+i)+j));
		}printf("\n");
	}	
	
	
	
free(pA);
}

