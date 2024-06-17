#include <stdio.h>

int main() {
    int L, C; // Dimensões do salão
    int A, B; // Posição inicial do robô
    int mapa[1000][1000]; // Matriz para representar o salão

    // Mensagem de instrução
    printf("Digite as dimensões do salão (L e C): ");
    scanf("%d %d", &L, &C);
    
    // Mensagem de instrução
    printf("Digite a posição inicial do robô (A e B): ");
    scanf("%d %d", &A, &B);
    
    // Mensagem de instrução
    printf("Digite a matriz representando os ladrilhos (1 para preto, 0 para branco):\n");
    // Leitura da matriz que representa os ladrilhos
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }
    
    // Encontrar a posição final do robô
    int linha_atual = A - 1; // A-1 pois A é 1-based e a matriz é 0-based
    int coluna_atual = B - 1; // B-1 pois B é 1-based e a matriz é 0-based
    
    while (coluna_atual < C && mapa[linha_atual][coluna_atual] == 1) {
        coluna_atual++;
    }
    
    // Mensagem de saída
    printf("Posição final do robô: %d %d\n", A, coluna_atual + 1); // Coluna_atual + 1 pois queremos 1-based
    
    return 0;
}
