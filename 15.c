//faca uma funcao que retorne a divisao inteira de 2 numeros inteiros passados por parametro e atravez de um parametro por referencia, o resto da divisão
#include <stdio.h>

int divisao(int *a, int *b, int *resto)

{
    *resto=(*a % *b);
    return *a / *b;
}

int main()
{
    int a, b, resto=0, div;
    scanf("%d%d", &a, &b);
    div=divisao(&a, &b, &resto);
    printf("Total %d \nResto %d\n\n",div, resto);
    
    int *ptr; //declara ponteiro para inteiro
    int num=5; //declara variavel tipo inteiro
    ptr=&num; // ptr recebe o endereço de num
    
    printf("%p \n %d \n\n", ptr, *ptr);
    system("pause"); 
    
    return 0;             
}
