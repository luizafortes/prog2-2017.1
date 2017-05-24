/*LUIZA FORTES*/

#include <stdio.h>
#include<string.h>

int main()
{
FILE *arq_cliente; //declara o ponteiro para o 1º arquivo
FILE *arq_cliente2; //declara o ponteiro para o 2º arquivo

char var_sexo, var_arquivo_aux, nomecli[50];
int cd_cli, vl_idade, indice=0;
float vl_limite_credito;

arq_cliente = fopen("CLIENTE.TXT", "r"); //abre arquivo para leitura
arq_cliente2 = fopen("CLIENTE2.TXT", "a"); //abre arquivo para mesclagem (vai inserir os dados do arquivo lido para o final deste arquivo

if (arq_cliente == NULL){
                printf("\nArquivo CLIENTE.TXT nao pode ser aberto.");
                printf("\nOcorreu um Erro Grave! Use alguma tecla para finalizar!");
                
}else {
      var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, nomecli, &vl_idade, &vl_limite_credito); 
      
      while(var_arquivo_aux != EOF) {
                    indice=indice+1;
                    printf("\n Dados do %d § cliente : \n ", indice);
                    printf("\nCodigo do cliente...: %d Sexo..: %c", cd_cli, var_sexo);
                    printf("\nNome do cliente................: %s", nomecli);
                    printf("\nIdade...........: %d Credito............: %0.2f", vl_idade, vl_limite_credito);
                    printf("\n-------------------------------------------- [Tecle algo] !");
                    fprintf(arq_cliente2, "\n%d %c %s %d %f\n", cd_cli, var_sexo, nomecli, vl_idade, vl_limite_credito); 
                    
                    var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, nomecli, &vl_idade, &vl_limite_credito);
                            }
      fclose (arq_cliente);
      fclose (arq_cliente2);
      printf("\n ***FIM : [Tecle algo] !");
      
      }
      }
      
                

                

