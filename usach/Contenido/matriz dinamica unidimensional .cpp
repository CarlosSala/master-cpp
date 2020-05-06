#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>

main(void){

    char *a;
	a=(char *) malloc(51*sizeof(char));
	
	a[0]='y';
	a[1]='o';
	a[2]='a';
	a[3]='p';
	a[4]='r';
	a[5]='u';
	a[6]='e';
	a[7]='b';
	a[8]='o';
	a[9]=' ';
	a[10]='l';
	a[11]='a';
	a[12]='a';
	a[13]='s';
	a[14]='i';
	a[15]='g';
	a[16]='n';
	a[17]='a';
	a[18]='t';
	a[19]='u';
	a[20]='r';
	a[21]='a';
	a[22]=' ';
	a[23]='d';
	a[24]='e';
	a[25]='p';
	a[26]='r';
	a[27]='o';
	a[28]='g';
	a[29]='r';
	a[30]='a';
	a[31]='m';
	a[32]='a';
	a[33]='c';
	a[34]='i';
	a[35]='o';
	a[36]='n';
	a[37]='d';
	a[38]='e';
	a[39]='a';
	a[40]='p';
	a[41]='l';
	a[42]='i';
	a[43]='c';
	a[44]='a';
	a[45]='c';
	a[46]='i';
	a[47]='o';
	a[48]='n';
	a[49]='e';
	a[50]='s';

	
	for (int i=0;i<2;i++) printf("%c",*(a+i));
	printf("\n");
	for (int i=2;i<12;i++) printf("%c",*(a+i));
	printf("\n");
	for (int i=12;i<25;i++) printf("%c",*(a+i));
	printf("\n");
	for (int i=25;i<37;i++) printf("%c",*(a+i));
	printf("\n");
	for (int i=37;i<39;i++) printf("%c",*(a+i));
	printf("\n");
	for (int i=39;i<51;i++) printf("%c",*(a+i));
	free(a);
}

