
/*
Irá lê o arquivo de indice, para testar se está como esperado.
*/
void le_index(FILE *arquivo, int cont,char *nomeArquivoIndice){
    char status;
    char lixo[7]; 
    int i = 0;
  
    
   if ((arquivo = fopen(nomeArquivoIndice, "rb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    else{
     
      fread(&status, sizeof(char) ,1 ,arquivo);
      fread(lixo,sizeof(char),1 ,arquivo);
      //Para ler o restante do arquivo;
      for(i = 0; i < cont;i++ ){
        fread(&index_p,sizeof(Index_p),1,arquivo);
      } 
      //Testando a leitura:
      for(i = 0; i < cont;i++ ){
        
      //printf("\n ID: %d e RRN: %d\n",index_p[i].idPessoa,index_p[i].rrn);
     // printf("\n RRN: %d \n",index_p[i].rrn);
      }
      
    
    }
    fclose(arquivo);
  }  

