#include <stdio.h>

const int max=3;

int main()
{
    int voos[max], LugDisp[max];
    int i, id, numvoo;
    
    for(i=0;i<max;i++)
    { printf("Informe o numero do voo: ");
      scanf("%d",&voos[i]);
      printf("Informe o numero de lugares: ");
      scanf("%d",&LugDisp[i]);
      }
    printf("Informe seu Id: ");
    scanf("%d", &id);
    
    while(id!=9999)
    {
      printf("Informe o voo: ");
      scanf("%d", &numvoo);
      int pos=-1;
      for(i=0;i<max;i++)
      {
        if(numvoo==voos[i])
        {pos=i;
        break;}}
              
        if(pos!=-1)
            {if(LugDisp[pos]!=0)
                {printf("Reserva feita com sucesso\n");
                printf("Id:%d - Voo:%d", id, numvoo);
                LugDisp[pos]--;}
            else
                printf("\n\nVoo lotado");}
                
        else  
            {printf("Voo inexistente");}
        
     printf("\n\nInforme seu Id:");
	scanf("%d", &id);}
    
    system("pause");
    return 0;}

    
    
    
