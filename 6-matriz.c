#include<stdio.h>

int moldura(int a, int b, char c)
{
    int i, j, cont=0;
    
    for(i=1;i<=a;i++)
{
    for(j=1;j<=b;j++)
    {
    if(i==1||i==a){
        printf("%c",c);
        cont++;}
    else  
    {if(j==1||j==b){
    printf("%c",c);
    cont++;}
    else
    {printf(" ");}}}
          
    printf("\n");    
}
return cont;
}

int main()
{
    int a, b, cont;
    char c;
    printf("Diga 2 numeros inteiros e um caracter:");
    scanf("\n%d\n%d\n%c", &a, &b, &c);
    cont=moldura(a, b, c);
    printf("%d\n\n", cont);
    
    system("pause");
    return 0;
    
    }
