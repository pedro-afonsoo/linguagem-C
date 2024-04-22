#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[100];
    int tamanho;
    int palindromo;

    FILE *arquivo = fopen("exemplo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (1) { // Loop infinito até que o usuário digite 'exit'
        printf("Digite uma palavra (ou 'exit' para sair): ");
        fflush(stdout);
        scanf("%s", palavra);

        if (strcmp(palavra, "exit") == 0) {
            break; // Sair do loop se a palavra for 'exit'
        }

        tamanho = strlen(palavra);
        palindromo = 1; // Inicializar como verdadeiro

        // Verificar se a palavra é um palíndromo
        for (int i = 0; i < tamanho / 2; i++) {
            if (palavra[i] != palavra[tamanho - 1 - i]) {
                palindromo = 0; // Não é um palíndromo
                break; // Sair do loop se não for um palíndromo
            }
        }

        if (palindromo) {
            fprintf(arquivo, "'%s' é um palíndromo.\n", palavra);
        } else {
            fprintf(arquivo, "'%s' não é um palíndromo.\n", palavra);
        }
    }

    fclose(arquivo); // Fechar o arquivo

    printf("Programa encerrado.\n");

    return 0;
}
