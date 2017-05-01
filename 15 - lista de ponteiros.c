#include <stdio.h>

int divisao(int a, int b, int *resto);

int main()

{
	int r, d;
	d=divisao(5,2,&r);
	printf("Resultado:%d - Resto:%d", d, r);
	
	return 0;
}

int divisao(int a, int b, int *resto)
{
	*resto=a%b;
	
	return a/b;
}
