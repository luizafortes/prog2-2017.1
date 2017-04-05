#include<stdio.h>

potencia();

int main ()
{
	int a, b;
	printf("Base: ");
	scanf("%d", &a);
	printf("Expoente: ");
	scanf("%d", &b);
	printf("R: %d\n",potencia(a,b));
	
	return 0;
}


int potencia(int base, int expoente)
{
	int i, potencia=1;
	for(i=0;i<expoente;i++)
		potencia*=base;
		
	return potencia;
}
