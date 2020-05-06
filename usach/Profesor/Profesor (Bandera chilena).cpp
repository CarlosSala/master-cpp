#include<windows.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>

main(void)
{
int alto=6, ancho=4, *palto, *pancho;
palto=&alto;
pancho=&ancho;
textcolor(BLUE);
textbackground(BLUE);
window(1,1,6,4);
textbackground(WHITE);
window(7,1,12,4);
textbackground(WHITE);
window(13,1,18,4);
textbackground(RED);
window(1,5,6,8);
for (int i=0;i<3;i++)
	{
	textbackground(RED);
	window(6*i+1,5,6*i+6,8);	
	}
printf("\n\n\n\n\n\n\n");	
}

