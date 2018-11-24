#include <stdio.h>

int main(void)
{
 char url[]="url.txt", nome[20] = "", marca[50] = "";

 float preco;

 int quantidade, atualizar;

 char texto[100] = "";

 FILE *arq;

 FILE *alterado;

 char ler;

 int linha_atual;

 int linha_selecionada;

 
   arq = fopen("url.txt", "r");

                           while((ler=fgetc(arq))!= EOF){
		                    putchar(ler);
                           }
			
	                        fclose(arq);
                       


 
 

  puts("\nEscolha uma linha");


  linha_atual = 0;

                        arq = fopen("url.txt", "r");
                        alterado = fopen("alterado.txt", "w");

                         scanf("%d",&linha_selecionada);


                        while(fgets(texto, 1000, arq) != NULL){
                                if(linha_atual == (linha_selecionada - 1)){
                                    fputs(texto, alterado);
                                    
                                }
                                linha_atual += 1;

        
                            }
                            fclose(arq);
                            fclose(alterado);
  


                       alterado = fopen("alterado.txt", "r");
                       (fscanf(alterado,"%s %s %f %d\n",nome, marca, &preco, &quantidade));

                        fclose(alterado);

  /*                         puts("\nAtualizar: 1-Nome | 2-Marca | 3-Preço | 4-Quantidade");


                        scanf("%d",&atualizar);

                        if(atualizar == 1){
                           alterado = fopen(alterado, "a");
                            system("clear");
                            puts("Nome:");
                            scanf("%s",nome);

                            fprintf(arq, "%s %s %0.2f %d\n",nome,marca,preco,quantidade);
                            fclose(arq);
                        }

                        if(atualizar == 2){
                           arq = fopen(url, "a");
                            system("clear");
                            puts("Marca:");
                            scanf("%s",marca);

                            fprintf(arq, "%s %s %0.2f %d\n",nome,marca,preco,quantidade);
                            fclose(arq);
                        }

                        if(atualizar == 3){
                           arq = fopen(url, "a");
                            system("clear");
                            puts("Preço:");
                            scanf("%f",&preco);

                            fprintf(arq, "%s %s %0.2f %d\n",nome,marca,preco,quantidade);
                            fclose(arq);
                        }

                        if(atualizar == 4){
                           arq = fopen(url, "a");
                            system("clear");
                            puts("Preço:");
                            scanf("%d",&quantidade);

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

                           // remove("url.txt");
                           // rename("alterado.txt", "url.txt");
*/

 
 return 0;
}
