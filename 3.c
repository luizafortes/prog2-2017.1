#include<stdio.h>

float media(float AV1, float AV2, float AV3, char letra)
{
int M=0;

	if (letra=='A'||letra=='a')
		M=(AV1+AV2+AV3)/3;    
	else
		if(letra=='P'||letra=='p')
			M=(AV1*5+AV2*3+AV3*2)/10;
		else
			M=-1;
return M;	    
}

int main()
{
float av1, av2, av3, m;
	char tipo;
	printf("Entre com as notas do aluno:\n");
	printf("AV1: "); scanf("%f", &av1);
	printf("\nAV2: "); scanf(" %f", &av2);
	printf("\nAV3: "); scanf(" %f", &av3);
	
	printf("Digite A para media aritmetica ou P para media ponderada:\n");
	scanf(" %c", &tipo); //colocar um espaço antes do %c para o \n não ser considerado caracter. 
	
	m=media(av1, av2, av3, tipo);
	
	printf("A media e: %f\n\n", m);
	printf("_____________________________________________________________");	  
system("pause");
return 0;
}
