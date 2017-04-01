#include<stdio.h>

int main()
{
	int matriz[16][12], nota[16]={0};
	int i, j=1, ap;
	
	
	printf("Entre com o gabarito da prova.\n"); //entrar com o gabarito
	for(j=1;j<=3;j++)
	{
		printf("Questao %d:", j);
		scanf(" %d", &matriz[0][j]);
	}
	
		
	//entrar com as notas dos alunos
	for(i=1;i<=2;i++)
	{	
		printf("Aluno %d: \n", i);
		for(j=1;j<=3;j++)
		{			
			printf("Q %d: ", j);
			scanf(" %d", &matriz[i][j]);
			if(matriz[i][j]==matriz[0][j])
			nota[i]++;			
		}
		printf("Nota: %d\n\n", nota[i]);
	}
		
	return 0;
}
