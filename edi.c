#include <stdio.h>

int main(void)
{
 char url[]="url.txt", nome[20] = "", marca[50] = "";

 float preco;

 int quantidade, atualizar;

 char texto[100] = "";

 char texto2[100] = "";

 FILE *arq;

 FILE *alterado;

  FILE *alterado3;

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

                             

                              linha_atual = 0;

                             arq = fopen("url.txt", "r");
                             alterado3 = fopen("alterado3.txt", "w");

                        while(fgets(texto2, 1000, arq) != NULL){
                                 if(linha_atual != (linha_selecionada - 1)){
                                    fputs(texto2, alterado3);
                                    }
                                    linha_atual += 1;
        
                            }

                            fclose(arq);
                            fclose(alterado3);

                            remove("url.txt");
                            rename("alterado3.txt", "url.txt");
  
 

                       alterado = fopen("alterado.txt", "r");
                       (fscanf(alterado,"%s %s %f %d\n",nome, marca, &preco, &quantidade));
                        printf("\nNome: %s Marca: %s Preço: %0.2f Quantidade: %d\n",nome,marca,preco,quantidade);

                        fclose(alterado);

                         puts("\nAtualizar: 1-Nome | 2-Marca | 3-Preço | 4-Quantidade");


                        scanf("%d",&atualizar);

                        if(atualizar == 1){
                           alterado = fopen("alterado.txt", "r");
                           arq = fopen("url.txt", "a");

                            system("clear");
                            puts("Nome:");
                            scanf("%s",nome);

                            fprintf(arq,"%s %s %0.2f %d\n",nome,marca,preco,quantidade);
                            fclose(arq);
                            fclose(alterado);
                        }

                        if(atualizar == 2){
                           alterado = fopen("alterado.txt", "r");
                           arq = fopen("url.txt", "a");

                            system("clear");
                            puts("Marca:");
                            scanf("%s",marca);

                            fprintf(arq,"%s %s %0.2f %d\n",nome,marca,preco,quantidade);
                            fclose(arq);
                            fclose(alterado);
                        }

                        if(atualizar == 3){
                           alterado = fopen("alterado.txt", "r");
                           arq = fopen("url.txt", "a");

                            system("clear");
                            puts("Preço:");
                            scanf("%f",&preco);

                            fprintf(arq,"%s %s %0.2f %d\n",nome,marca,preco,quantidade);
                            fclose(arq);
                            fclose(alterado);
                        }

                        if(atualizar == 4){
                           alterado = fopen("alterado.txt", "r");
                           arq = fopen("url.txt", "a");

                            system("clear");
                            puts("Quantidade:");
                            scanf("%d",&quantidade);

                            fprintf(arq,"%s %s %0.2f %d\n",nome,marca,preco,quantidade);
                            fclose(arq);
                            fclose(alterado);
                        }

                          remove("alterado.txt");


 
 return 0;
}
