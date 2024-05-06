#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROLLS 10  // Added: Maximum number of rounds

// Função para lançar um dado
int rolarDado() {
    return rand() % 6 + 1; // Gera um número aleatório entre 1 e 6
}

// Função para calcular a soma dos valores dos dados
int calcularSoma(int dado1, int dado2) {
    return dado1 + dado2;
}

int main(void) {
    // Modified: Use arrays to store history
    int jogador1[MAX_ROLLS][2], jogador2[MAX_ROLLS][2];
    int somaJogador1[MAX_ROLLS], somaJogador2[MAX_ROLLS];
    int round = 0;  // Added: Track the current round
    char continuar = 's';  // Added: Variable to decide if the game continues

    srand(time(NULL)); // Semente para a função rand()

    while (continuar == 's' && round < MAX_ROLLS) {  // Modified: Loop for multiple rounds
        printf("Round %d:\n", round + 1);

        // Jogador 1
        printf("Jogador 1, pressione ENTER para rolar os dados.\n");
        getchar(); // Espera o jogador 1 pressionar ENTER
        jogador1[round][0] = rolarDado(); // Lança o primeiro dado do jogador 1
        jogador1[round][1] = rolarDado(); // Lança o segundo dado do jogador 1
        printf("Jogador 1: %d + %d\n", jogador1[round][0], jogador1[round][1]);
        somaJogador1[round] = calcularSoma(jogador1[round][0], jogador1[round][1]);
        printf("Soma do Jogador 1: %d\n", somaJogador1[round]);

        // Jogador 2
        printf("\nJogador 2, pressione ENTER para rolar os dados.\n");
        getchar(); // Espera o jogador 2 pressionar ENTER
        jogador2[round][0] = rolarDado(); // Lança o primeiro dado do jogador 2
        jogador2[round][1] = rolarDado(); // Lança o segundo dado do jogador 2
        printf("Jogador 2: %d + %d\n", jogador2[round][0], jogador2[round][1]);
        somaJogador2[round] = calcularSoma(jogador2[round][0], jogador2[round][1]);
        printf("Soma do Jogador 2: %d\n", somaJogador2[round]);

        // Determina o vencedor do round
        if (somaJogador1[round] > somaJogador2[round]) {
            printf("Jogador 1 venceu o Round %d!\n", round + 1);
        } else if (somaJogador1[round] < somaJogador2[round]) {
            printf("Jogador 2 venceu o Round %d!\n", round + 1);
        } else {
            printf("Round %d foi um empate!\n", round + 1);
        }

        // Added: Prompt to continue or stop the game
        printf("\nDeseja continuar para o próximo round? (s/n): ");
        scanf(" %c", &continuar);
        getchar(); // Limpa o buffer
        round++;
    }

    // Added: Display the history of results
    printf("\nHistórico de resultados:\n");
    for (int i = 0; i < round; i++) {
        printf("Round %d - Jogador 1: %d + %d = %d, Jogador 2: %d + %d = %d\n",
            i + 1, jogador1[i][0], jogador1[i][1], somaJogador1[i], 
            jogador2[i][0], jogador2[i][1], somaJogador2[i]);
    }

    return 0;
}
