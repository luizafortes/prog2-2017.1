#include <stdio.h>

retangulo(int a, int b, int c)
	
	{
 if(a>b&&b>c) 
		{if(a*a==(b*b)+(c*c))
			return 1;
		else			
			return 0;}
			else
			return -1;
	}
	
int main()
{
	int a, b, c, resp;
	
	do
	{
	printf("Digite em ordem decrescente o tamanho dos lados de um retangulo:\n");
	printf("a: "); scanf("%d", &a); printf("b: "); scanf("%d", &b); printf("c: "); scanf("%d", &c);
	resp=retangulo(a, b, c);
	

		if(resp==1)
			printf("Triangulo Retangulo\n\n");
		else
		    if(resp==0)
			printf("O triangulo nao e retangulo!\n\n");
	
	else
		printf("Digite em ordem decrescente!\n\n");
	}
	while(resp!=1);
	
system ("pause");
return 0;		
}
