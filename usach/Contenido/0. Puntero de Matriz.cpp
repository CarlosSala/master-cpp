#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>

main(void)
{

int CATO[10], *pCATO;
pCATO=&CATO[0];
CATO[7]=134;

printf("%i",CATO[7]);
printf ("\n");
printf("%i",*(pCATO+7));

}
