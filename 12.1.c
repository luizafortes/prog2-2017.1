
int pesquisa(int *vet, int elem, int t)
{
	int i;
	for(i=0;i<t;i++)
	{
		if(vet[i]==elem)
			return vet[i];
		else
			return -1;
	}
}






printf("Diga um numero: ");
	scanf("%d", num);
	pesquisa(&vet, num, tam);
	if(pesquisa(&vet, num, tam)==-1)
		printf("Elemento nao encontrado!");
		
	else
		printf("Elemento encontrado: %d",pesquisa(&vet, num, tam));
