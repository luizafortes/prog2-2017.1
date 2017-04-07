#include <stdio.h>

struct voos{
	char companhia;
	char origem[50];
	char destino[50];
	int nvoo;
	int LugDisp;
};
const int max=3;

void carregavoos();

int main()
{
	struct voos voo[max];
    int id, numvoo, i;
    
    carregavoos(&voo);
    
    printf("Informe seu Id: ");
    scanf("%d", &id);
    
    while(id!=9999)
    {
      printf("Informe o voo: ");
      scanf("%d", &numvoo);
      int pos=-1;
      for(i=0;i<max;i++)
      {
        if(numvoo==voo[i].nvoo)
        {pos=i;
        break;}}
        if(pos!=-1)
            {if(voo[pos].LugDisp!=0)
                {printf("Reserva feita com sucesso\n");
                printf("Id:%d - Voo:%d", id, numvoo);
                voo[pos].LugDisp--;}
            else
                printf("\n\nVoo lotado");}
                
        else  
            {printf("Voo inexistente");}
        
    printf("\n\nInforme seu Id:");
	scanf("%d", &id);}
    
	system("pause");
    return 0;}
        
void carregavoos(struct voos *v)
{ int i;
for(i=0;i<max;i++)
    { printf("Informe o numero do voo: ");
      scanf("%d",&v[i].nvoo);
      printf("Informe o numero de lugares: ");
      scanf("%d",&v[i].LugDisp);
      }         
}
    
    
    
