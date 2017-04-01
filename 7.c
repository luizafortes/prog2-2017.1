#include <stdio.h>

fatorial(int n)
{
	int fat=1;
	while(n>0)
	{
		fat=fat*n;
		n=n-1;
	}
	printf("%d", &fat);
return fat;
}

int main()
{
	int n, f;
	printf("---------Fatorial---------\n");
	printf("Entre com um numero inteiro positivo: ");
	scanf(" %d", &n);
	f=fatorial(n);
	printf(" %d", &f);

system("pause");
return 0;
}
