#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

main (void)
{
	
int variable=0, *pvariable;
pvariable=&variable;

while (variable<5)
{system("cls");
printf("\n");
printf ("MENU DE OPCIONES\n"); 
printf("\n");
printf ("1. abrir archivo\n");   
printf ("2. grabar archivo\n"); 
printf ("3. imprimir archivo\n");
printf ("4. borrar archivo\n");
printf ("5. salir\n");
printf ("\n");
printf ("Introduzca su opcion [1-5] ==> ");
scanf ("%i",pvariable);
switch (variable)
{
	case (1):
		{
		printf("Selecciono la opcion abrir archivo");
		break;		
		}
	case (2):
		{
		printf("Selecciono la opcion grabar archivo");
		break;		
		}
	case (3):
		{
		printf("Selecciono la opcion imprimir archivo");
		break;		
		}
	case (4):
		{
		printf("Selecciono la opcion borrar archivo");
		break;		
		}
	default:
		{	
		printf("Selecciono salir");	
		break;	
		}
}
Sleep(4000);
}
}

