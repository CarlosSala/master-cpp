#include<windows.h>
#include<conio.h>
/* una solucion al cambio de linea con cprintf() puede ser la funcion gotoxy(,); que lleva 
el cursor a la posicion que desee indicandole columna y fila */ 
int main(void)
{
textcolor(15); 
textbackground(12);
window(1,1,12,10);
cprintf("Primero");
gotoxy (1,2);
cprintf("Segundo");
gotoxy(1,3);
cprintf("Tercero");
gotoxy (1,4);
cprintf("Cuarto");
gotoxy(9,10);
cprintf("Fin");
getch();
}
