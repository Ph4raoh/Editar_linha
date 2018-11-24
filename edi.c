#include <stdio.h>

int main(void)
{
 char url[]="url.txt", nome[20] = "", marca[50] = "";

 float preco;

 int quantidade, atualizar;

 char texto[100] = "";

 FILE *arq;

 FILE *alterado;

 
 arq = fopen(url, "r");
 (fscanf(arq,"%s %s %f %d\n",nome, marca, &preco, &quantidade));
          printf("Nome: %s Marca: %s Preço: %f Quantidade: %d\n",nome,marca,preco,quantidade);
  fclose(arq);

 puts("\nAtualizar: 1-Nome | 2-Marca | 3-Preço | 4-Quantidade");


                        scanf("%d",&atualizar);

                        if(atualizar == 1){
                           arq = fopen(url, "a");
                            system("clear");
                            puts("Nome:");
                            scanf("%s",nome);

                             fprintf(arq, "%s %s %0.2f %d\n",nome,marca,preco,quantidade);
                            fclose(arq);


                        }


                        arq = fopen("url.txt", "r");
                        alterado = fopen("alterado.txt", "w");

                        while(fgets(texto, 1000, arq) != NULL){
                                
                                    fputs(texto, alterado);
        
                            }
  
                           
                            fclose(arq);
                            fclose(alterado);

                            remove("url.txt");
                            rename("alterado.txt", "url.txt");


 
 return 0;
}
