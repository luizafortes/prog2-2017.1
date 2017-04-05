#include<stdio.h>
//verificando se um numero é primo
int main()
{
	int i, num;
	int soma=0;
	printf("Diga um numero inteiro: ");
	scanf("%d", &num);
	for(i=2;i<num;i++)
	{
		if((num%i)==0)
			soma++;					
	}
	
	if (soma!=0)
		printf("O numero %d nao e primo", num);
	else
		printf("O numero %d e primo", num);
}
