#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
main (void)
{	
int variable=0, *pvariable;
pvariable=&variable;
float x=0;
float y=0;
int   z=0;

while (variable >=1, variable <=12)
{
system ("cls");
printf ("\n");	
printf ("MENU DE OPCIONES\n"); 
printf ("\n");
printf ("1.  Adicion\n");   
printf ("2.  Sustraccion\n"); 
printf ("3.  Multiplicacion\n");
printf ("4.  Division\n");
printf ("5.  Potencia de 2\n");
printf ("6.  Potencia de 3\n");
printf ("7.  Raiz cuadrada\n");
printf ("8.  Raiz cubica\n");
printf ("9.  Logaritmo base 10\n");
printf ("10. Valor absoluto\n");
printf ("11. Par o impar\n");
printf ("12. Primo o no primo\n");
printf ("\n");
printf ("Para salir presione otro numero\n");
printf ("\n");
printf ("(Los resultados poseen un maximo de 2 decimales)\n");
printf ("\n");
printf ("Introduzca una opcion entre [1-12]:");
scanf  ("%i", pvariable);
switch (variable)
{
	case(1):
	{
	printf ("\n""Adicion\n");
	printf ("\n"); 
	printf ("Ingrese el primer numero: ");
	scanf  ("%f",&x); 
	printf ("Ingrese el segundo numero: ");
	scanf  ("%f",&y);
	float c=x+y;
	printf ("El resultado es: %.2f",c);
	break;
	}
	case(2):
	{	
	printf ("\n""2.  Sustraccion\n");
	printf ("\n");
	printf ("Ingrese el primer numero: ");
	scanf  ("%f",&x);
	printf ("Ingrese el segundo numero: ");
	scanf  ("%f",&y);
	float c=x-y;
	printf ("El resultado es: %.2f",c); 
	break;
	}
	case(3):
	{
	printf ("\n""3.  Multiplicacion\n");
	printf ("\n");
	printf ("Ingrese el primer numero: ");
	scanf  ("%f",&x);
	printf ("Ingrese el segundo numero: ");
	scanf  ("%f",&y);
	float c=x*y;
	printf ("El resultado es: %.2f",c);
	break;
	}
	case(4):
	{
	printf ("\n""4.  Division\n");
	printf ("\n");
	printf ("Ingrese el primer numero: ");
	scanf  ("%f",&x);
	printf ("Ingrese el segundo numero: ");
	scanf  ("%f",&y);
	float c=x/y;
	printf ("El resultado es: %.2f",c);
    break;
	}
	case(5):
	{
	printf ("\n""5.  Numero al cuadrado\n");
	printf ("\n");
	printf ("Ingrese un numero: ");
	scanf  ("%f",&x);
	float c=x*x;
	printf ("El resultado es: %.2f",c);
	break;
	}
	case(6):
	{		
	printf ("\n""6.  Numero al cubo\n");
	printf ("\n");
	printf ("Ingrese un numero: ");
	scanf  ("%f",&x);
	float c=pow(x,3);
	printf ("El resultado es: %.2f",c);
	break;
	}
	case(7):
	{		
	printf ("\n""7.  Raiz cuadrada\n");
	printf ("\n");
	printf ("Ingrese un numero: ");
	scanf  ("%f",&x);
	float c=sqrt(x);
	printf ("El resultado es: %.2f",c);
	break;
	}
	case(8):
	{
	printf ("\n""8.  Raiz cubica\n");
	printf ("\n");
	printf ("Ingrese un numero: ");
	scanf  ("%f",&x);
	float c=pow(x,0.33333);
	printf ("El resultado es: %.2f",c);
	break;
	}
	case(9):
	{
	printf ("\n""9.  Logaritmo base 10\n");
	printf ("\n");
	printf ("Ingrese un numero: ");
	scanf  ("%f",&x);
	float c=log10(x);
	printf ("El resultado es: %.2f",c);
	break;
	}
	case(10):
	{
	printf ("\n""10. Valor absoluto\n");
	printf ("\n");
	printf ("Ingrese un numero: ");
	scanf  ("%f",&x);
	float c=abs(x);
	printf ("El resultado es: %.2f",c);
	break;
	}
	case(11):
	{
	printf ("\n""11. Par o impar\n");
	printf ("\n");
	printf ("Ingrese un numero entero: ");
	scanf  ("%i",&z);
			if (z%2==0)
			{
			printf("El numero es par");
			}else
			{printf("El numero es impar");
			}	
	break;
	}
	case(12):
	{
	printf ("\n""12. Averigua si el numero es primo\n");
	printf ("\n");
	printf ("Ingrese un numero entero: ");
	scanf  ("%i",&z);
	int w=1;
	int k=0;
	 while (w <= z)
	 	{
	 	 if (z%w==0)
	 	    {
		 	 k=k+1;
		    }
	 	 w=w+1;
	 	}
	if(k==2)
	  {
	  printf ("El numero es primo");	
	  }
	   else
	   		{
	   	       printf ("El numero no es primo");	 
	   		}
	break;
	}
	default:
	{
	printf ("\n""El programa acabara en breve");
	break;
	}
}
Sleep(2500);
}
}




