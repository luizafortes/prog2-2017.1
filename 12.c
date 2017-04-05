#include <stdio.h>
const int max=3;
pesquisa();


int main()
{
	int i, num;
	int vet[max];
	int result;
	
	printf("Carregue o vetor de 3 posicoes:\n");
	
	for(i=0;i<max;i++)
		scanf("%d", &vet[i]);
		
	printf("Diga um numero: ");
	scanf("%d", &num);
	result=pesquisa(&vet, num, max);
	if(result==num)
		
		
	
	
system("pause");
return 0;	
}


int pesquisa(int *vet, int elem, int t)
{
	int i;
	for(i=0;i<t;i++)
		{if(vet[i]==elem)
			{printf("Elemento encontrado!\n");}
		}
				
}
