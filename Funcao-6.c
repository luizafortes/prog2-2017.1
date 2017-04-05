#include <stdio.h>
#include <math.h>

float distancia2pontos();
potencia();

int main()
{
	int a1, b1, a2, b2;
	float d;
	printf("Informe as coordenadas de 2 pontos para calcular a distancia entre eles:");
	printf("\nponto 1 (a1, b1):\n");
	scanf("%d %d",&a1, &b1);
	printf("\nponto 2 (a2, b2):\n");
	scanf("%d %d",&a2, &b2);
	d=distancia2pontos(a1,b1,a2,b2);
	
	printf("\nDistancia = %.2f", d);
	
}

int potencia(int base, int expoente) //calculo de potencia
{
	int i, potencia=1;
	for(i=0;i<expoente;i++)
		potencia*=base;
		
	return potencia;
}



float distancia2pontos(int x1, int y1, int x2, int y2) //calcula a distancia entre 2 pontos
{
	float dist;
	dist=sqrt(((potencia((x1-x2),2))+(potencia((y1-y2),2))));
	return dist;
}







