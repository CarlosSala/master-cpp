#include <iostream>
#include <stdio.h>

main (void)
{
int x;
x=0;
	for (int j=0;j<10;j++)	
		{
		for (int k=0;k<20;k++)
			{
			x++;
			if (x%2!=0)
				{
				printf("%03i ",x);
				}else
				{
				printf("    ",x);
				}
			}
		printf("\n");
		for (int k=0;k<20;k++)
			{
			x++;
			if (x%2==0)
				{
				printf("%03i ",x);
				}else
				{
				printf("    ",x);
				}
			}
		printf("\n");
		}
}

