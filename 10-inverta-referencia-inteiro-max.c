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
const int max = 6;
int main()
{
    int tam,i;
            
       
    int vetor[max];
 

    for(i=0;i<max;i++)
    {
        scanf("%d", &vetor[i]);
    }       
     
    for(i=0;i<max;i++)
        printf("%d\t", vetor[i]);
        
    printf("\n\nVetor nvertido: ");
    
    inverte(vetor,max);
    
     for(i=0;i<max;i++)
        printf("%d\t", vetor[i]);
        
    system("pause");
    return 0;
    
}
