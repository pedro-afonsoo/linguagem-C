/*
 ============================================================================
 Name        : prj_file.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *arquivo = fopen("exemlplo.txt","w");
	if (arquivo != NULL){
		fprintf(arquivo, "Hello, World\n");
		fclose(arquivo);
		printf("texto gravado com sucesso.\n");
	}else{
		printf("erro ao abrir o arquivo para escrita.\n");
		return 1;
	}
	arquivo = fopen("exemplo.txt","r");
	if(arquivo != NULL){
		char linha[100];
	while (fgets(linha, sizeof(linha),arquivo) != NULL) {
		printf("conteudo lido so arquivo: %s", linha);
	}
	fclose(arquivo);
	} else {
		printf("erro ao abrir o arquivo para leitura\n");
	}
}
