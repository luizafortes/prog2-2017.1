#include <stdio.h>

potencia (int base, int expoente)

{
	int i;
	int result=0;
	
		if(expoente>-1)
			{	
			if(expoente==1||expoente==0)
				result=base;
						
			else
				{
				result=base*base;
				for (i=2;i<expoente;i++)
					result=result*base;
				}
			}
		else
			result=0;
	
	return result;
		
}

int main()
{
	int base, expoente, result;
	printf("Entre com a base: ");
	scanf("%d", &base);
	printf("Entre com o expoente: ");
	scanf("%d", &expoente);
	
	result=potencia(base, expoente);
	
	printf("%d", result);
}
