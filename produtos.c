#include<stdio.h>
int main(){
	struct Tprodutos{
		int cod, qtd;
		char nome[30];
		float valor;		
	};
	
int tam=0; struct Tprodutos pdt;
struct Tprodutos *vendas;
FILE *produtos=fopen("produtos.txt", "r");

if(produtos!=NULL)
{
	int retorno=fscanf(produtos, "%d %s %f %d", &pdt.cod, pdt.nome, &pdt.valor, &pdt.qtd);
	
	while(retorno!=EOF){
		printf("Cod: %d %s %f %d vendidos\n", pdt.cod, pdt.nome, pdt.valor, pdt.qtd); 
		tam++;
		retorno=fscanf(produtos, "%d %s %f %d", &pdt.cod, pdt.nome, &pdt.valor, &pdt.qtd);
	}
	printf("%d produtos\n", tam);
	
}
fclose(produtos);

produtos=fopen("produtos.txt", "r");
FILE *produtos2=fopen("produtos2.bin", "wb");

vendas = (struct Tprodutos *) malloc(tam*sizeof(struct Tprodutos));

int i=0;
int retorno=fscanf(produtos, "%d %s %f %d", &vendas[i].cod, vendas[i].nome, &vendas[i].valor, &vendas[i].qtd);

	while(i<tam){
		i++;
		retorno=fscanf(produtos, "%d %s %f %d", &vendas[i].cod, vendas[i].nome, &vendas[i].valor, &vendas[i].qtd);
		}
int mcaro = vendas[0].valor, posc=0;

int mqtd = vendas[0].qtd, posq=0;
fwrite(vendas,tam*sizeof(struct Tprodutos), tam, produtos2);	
for(i=0;i<tam;i++)
{
    printf("\n%d %s %f %d\n", vendas[i].cod, vendas[i].nome, vendas[i].valor, vendas[i].qtd );              
    if(vendas[i].valor>mcaro)
    	{mcaro=vendas[i].valor;
    	
   		posc=i;
    	}
	
		if(vendas[i].qtd>mqtd)
        {mqtd=vendas[i].qtd;
        
		posq=i;
 	    }
}
fwrite(&vendas[posc].nome, 30*sizeof(char), 1, produtos2);

printf("\n\nO mais caro e o:\n%d, %s, %f, %d\nNa posicao %d\n\n", vendas[posc].cod, vendas[posc].nome, vendas[posc].valor, vendas[posc].qtd,posc);

system("pause");
return 0;
}

