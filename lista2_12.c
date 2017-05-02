#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char string[50];
    int tam;
    
    printf("Diga uma frase:\n");
    gets(string);
    tam=strlen(string);
    printf("%d", tam);
    for (i=0;i<tam;i++)
    {printf("%c%c", string[i], string[i]);}
        
system("pause");
return 0;
}
