#include <stdio.h>

int main() {
    char resultados[6]; // Array para armazenar os resultados dos jogos
    int vitorias = 0;   // Contador para o número de vitórias

    // Leitura dos resultados dos jogos
    printf("Digite os resultados dos 6 jogos (V para vitória, P para derrota):\n");
    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultados[i]); // Lendo o resultado de cada jogo
        if (resultados[i] == 'V') {
            vitorias++; // Incrementa o contador se for uma vitória
        }
    }

    // Determinação do grupo com base no número de vitórias
     if (vitorias >= 5) {
        printf("1\n"); // Grupo 1
    } else if (vitorias >= 3) {
        printf("2\n"); // Grupo 2
    } else if (vitorias >= 1) {
        printf("3\n"); // Grupo 3
    } else {
        printf("-1V\n"); // Não convidado para continuar
    }

    return 0;
}
