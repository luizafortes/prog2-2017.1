#include <stdio.h>

int main()
{
FILE *arq_cliente;
char var_sexo, var_arquivo_aux, nomecli[50];
int cd_cli, vl_idade, indice=0;
float vl_limite_credito;

arq_cliente = fopen("CLIENTE.TXT", "r");

if (arq_cliente == NULL){
                printf("\nArquivo CLIENTE.TXT nao pode ser aberto.");
                printf("\nOcorreu um Erro Grave! Use alguma tecla para finalizar!");
                getch();
}else {
      var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, nomecli, &vl_idade, &vl_limite_credito); 
      
      while(var_arquivo_aux != EOF) {
                    indice=indice+1;
                    printf("\n Dados do %d � cliente : \n ", indice);
                    printf("\nCodigo do cliente...: %d Sexo..: %c", cd_cli, var_sexo);
                    printf("\nNome do cliente................: %s", nomecli);
                    printf("\nIdade...........: %d Credito............: %0.2f", vl_idade, vl_limite_credito);
                    printf("\n-------------------------------------------- [Tecle algo] !");
                    getch();
                    var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, nomecli, &vl_idade, &vl_limite_credito);
                            }
      fclose (arq_cliente);
      printf("\n ***FIM : [Tecle algo] !");
      getch();
      }
      }
      
                

                

