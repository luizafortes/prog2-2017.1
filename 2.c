#include<stdio.h>

void converte(int seg)
{
int h, m, s;
h=seg/3600;
m=(seg%3600)/60;
s=(seg%3600)%60;

printf("%d H %d M %d S\n", h, m, s);
}

int main()
{
int seg;
printf("Diga 1 numero: \n");
scanf("%d", &seg);
converte(seg);

system ("pause");
return 0;
}