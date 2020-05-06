#include <iostream>
#include <stdio.h>	

void Invertir1D (int *pI, int xI)
{
int Aux[xI];
for (int k=0;k<xI;k++) Aux[k]=*(pI+k);

for (int j=0;j<xI;j++) *(pI+j)=Aux[xI-j-1];


}

void Mostrar1D (int *pI, int xI)
{
	
	for (int k=0; k<xI; k++) printf("%3i ",*(pI+k));
	printf("\n ");
}

main (void)
{
int N=7;
int A[N], *pA;
for (int k=0;k<N;k++) A[k]=k+1;
pA=&A[0];
Mostrar1D (pA, N);

Invertir1D (pA, N);
Mostrar1D (pA, N);
	
}
