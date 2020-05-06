#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
main()
{

union Tabla{ int x; char y;};	
Tabla Luna;
	
Luna.x=15;
Luna.y=14;
printf("%i\n",Luna.y);
Luna.y='s';	
printf("%c\n",Luna.x);	
printf("%i\n",Luna.x);
}
