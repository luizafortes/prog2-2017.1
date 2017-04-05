#include <stdio.h>

int somapareseimpares(int n)
{
	int i, somaP=0, somaI=0;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
			somaP+=i;
		else
			somaI+=i;		
	}
	
	printf("\nA soma dos numero pares entre 0 e %d e: %d", n, somaP);
	printf("\nA soma dos numero impares entre 0 e %d e: %d", n, somaI);
}

int main()
{
	int num;
	printf("Diga um numero: ");
	scanf("%d", &num);
	
	somapareseimpares(num);
}
