#include <stdio.h>  
#include <string.h>


int main()
{
    char vetor[100];
    int i, tam;
    char invertida;
    
    printf("Digite uma palavra: ");
    scanf("%s", vetor);
    printf("\n%s", vetor);
    tam=strlen(vetor);
    
    printf("\n\nPalavra invertida: ");
    
    for(i=tam;i>=0;i--)
    {printf("%c", vetor[i]);}
    printf("\n\n");
    
    system("pause");
    return 0;
    
}
