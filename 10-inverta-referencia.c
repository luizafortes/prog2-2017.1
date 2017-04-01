#include <stdio.h>  
#include <string.h>

void inverte(char *a, int tam)
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
    int tam;
            
    printf("Digite o tamanho do vetor\n ");
    scanf("%d", &tam);
    
    char vetor[tam];
    printf("Digite uma palavra:\n ");
    scanf("%s", &vetor);
    tam=strlen(vetor);
    
    printf("\n%s", vetor);
        
    printf("\n\nPalavra invertida: ");
    
    inverte(vetor,tam);
    printf("%s", vetor);
        
    system("pause");
    return 0;
    
}
