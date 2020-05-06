#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>

main (void)
{
struct base{int numeros[3]; int *pnumeros; char nombres[16]; char *pnombres; char apellidos[16]; char *papellidos; }datos;

datos.numeros[3], datos.pnumeros;
datos.pnumeros=&datos.numeros[0];
datos.pnumeros[0]=1;
datos.pnumeros[1]=2;
datos.pnumeros[2]=3;

datos.nombres[16], datos.pnombres;
datos.pnombres=&datos.nombres[0];

datos.nombres[0]='C';
datos.nombres[1]='a';
datos.nombres[2]='r';
datos.nombres[3]='l';
datos.nombres[4]='o';
datos.nombres[5]='s';

datos.apellidos[16], datos.papellidos;
datos.papellidos=&datos.apellidos[0];

datos.apellidos[0]='R';
datos.apellidos[1]='i';
datos.apellidos[2]='o';
datos.apellidos[3]='s';

datos.nombres[6]='J';
datos.nombres[7]='o';
datos.nombres[8]='s';
datos.nombres[9]='e';

datos.apellidos[4]='C';
datos.apellidos[5]='a';
datos.apellidos[6]='s';
datos.apellidos[7]='t';
datos.apellidos[8]='r';
datos.apellidos[9]='o';

datos.nombres[10]='D';
datos.nombres[11]='a';
datos.nombres[12]='n';
datos.nombres[13]='i';
datos.nombres[14]='e';
datos.nombres[15]='l';

datos.apellidos[10]='S';
datos.apellidos[11]='o';
datos.apellidos[12]='l';
datos.apellidos[13]='i';
datos.apellidos[14]='e';
datos.apellidos[15]='r';

printf(" %03i",*(datos.pnumeros));
printf(" ");
for(int x=0;x<6;x++) printf("%c",*(datos.pnombres+x));
printf(" ");
for(int x=0;x<4;x++) printf("%c",*(datos.papellidos+x));
printf("\n");
printf(" %03i",*(datos.pnumeros+1));
printf(" ");
for(int x=6;x<10;x++) printf("%c",*(datos.pnombres+x));
printf("   ");
for(int x=4;x<10;x++) printf("%c",*(datos.papellidos+x));
printf("\n");
printf(" %03i",*(datos.pnumeros+2));
printf(" ");
for(int x=10;x<16;x++) printf("%c",*(datos.pnombres+x));
printf(" ");
for(int x=10;x<16;x++) printf("%c",*(datos.papellidos+x));

getch();
}
