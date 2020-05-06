#include<stdio.h>
#include<iostream>

main (void)
{
	int *p, q, *r;
	int s[7], t, *u;
	do
	{
		q=12, t=6;
		s[0]=1, s[1]=2, s[3]=3, s[4]=1, s[5]=1, s[6]=1;
		p=&s[0];
		r=p+3;
		u=r-1;
		p=u-1;
		for (int k=0;k<6;k++) *(p+k)=3*(k+1);
		for (int k=0;k<6;k++) printf("%3i",*(p+k));
		printf("\n");
		for (int k=0;k<7;k++) printf("%3i",s[k]);
	}while (1!=1);
}
	
