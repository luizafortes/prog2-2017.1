#include <stdio.h>  
#include <string.h>

void inverte(int *a, int tam)
{
    int i, temp;
    for(i=0;i<(tam/2);i++)
    {
        temp=a[i];
        a[i]=a[(tam-1)-i];
        a[(tam-1)-i]=temp;
    }
}

int main()
{
    int tam,i;
            
    printf("Digite o tamanho do vetor\n ");
    scanf("%d", &tam);
    
    //int *vetor = malloc(tam*sizeof(int));
    
    int vetor[tam];
 
    printf("Digite %d numeros inteiros:\n ", tam);

    for(i=0;i<tam;i++)    
        scanf("%d", &vetor[i]);
            
    for(i=0;i<tam;i++)
    {
    printf("%d", vetor[i]);}
        
    printf("\n\nVetor nvertido: ");
    
    inverte(vetor,tam);
     for(i=0;i<tam;i++)
    {
    printf(" %d", vetor[i]);}
        
    system("pause");
    return 0;
    
}
