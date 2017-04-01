#include <stdio.h>

int soma()
{
    int i, A, B, total=0;
    scanf("%d%d", &A, &B);
    if(A>=B)
        printf("Intervalo Invalido");
    else
        {
            for (i=A+1;i<B;i++)
            total=total+i;
        }
    return total;
}

int main ()
{
    int resp;
    printf("Informe 2 numeros inteiros:");
    resp=soma();

    printf("Total: %d", resp);
    system ("pause");
    return 0;
}