#include <stdio.h>

int fatorial();

int main()
{
	int num, k;
	int A;
	printf("------Calculo de um arranjo de um numero 'n' a uma taxa 'k'------\n");
	printf("\nInforme um numero para n: ");
	scanf("%d", &num);
	printf("\nInforme um numero para k: ");
	scanf("%d", &k);
	
	A=fatorial(num)/fatorial(num-k);
	printf("A= %d", A);
	
	return 0;
}

int fatorial(int n) //calcula o fatorial de um numero
{
	int i;
	int fat=1;
	for (i=1;i<=n;i++)
	{
		fat=fat*i;
		}	
	return fat;
}
