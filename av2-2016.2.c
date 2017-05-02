#include <stdio.h>

int pesquisa(int vet[], int elem, int tam);

const int TAM=5;
int main()
{
	int notas[TAM];
	int i, pos;
	printf("Informe as notas:");
	for(i=0;i<TAM;i++)
		scanf("%d", &notas[i]);
	
	pesquisa(notas, 7, TAM);
		
return 0;
}

int pesquisa(int vet[], int elem, int tam)
{
	int i, pos=-1;
	
	for(i=0;i<(tam/2+1);i++)
	{
		if(elem==vet[i])
			{
				pos=i;
				printf("Elemento (%d) encontrado posicao %d!", vet[pos], pos);
			}
			
		else if (elem==vet[tam-i])
			{
				pos=tam-i;
				printf("Elemento (%d) encontrado na posicao %d!", vet[pos], pos);
			}
	}
	
	if (pos==(-1))
		printf("Elemento nao encontrado!");

	return pos;	
}
