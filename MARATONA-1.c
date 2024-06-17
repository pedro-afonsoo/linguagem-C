#include <stdio.h>

int main() {
    int N;
    char continuar;
    
    do {
        // Solicita ao usuário para digitar um número
        printf("Digite um número entre 0 e 10: ");
        scanf("%d", &N);
        
        // Variáveis para armazenar as representações
        char left_hand[6];  // Tamanho máximo para a mão esquerda é 5 dedos + '\0'
        char right_hand[6]; // Tamanho máximo para a mão direita é 5 dedos + '\0'
        
        // Lógica para determinar as representações
        if (N <= 4) {
            // Mão esquerda mostra N dedos, mão direita fica fechada (*)
            for (int i = 0; i < N; i++) {
                left_hand[i] = 'I';
            }
            left_hand[N] = '\0'; // Terminador de string
            
            right_hand[0] = '*'; // Mão direita fechada
            right_hand[1] = '\0'; // Terminador de string
        } else {
            // Mão esquerda mostra todos os 5 dedos, mão direita mostra N - 5 dedos
            for (int i = 0; i < 5; i++) {
                left_hand[i] = 'I';
            }
            left_hand[5] = '\0'; // Terminador de string
            
            int remaining = N - 5;
            for (int i = 0; i < remaining; i++) {
                right_hand[i] = 'I';
            }
            right_hand[remaining] = '\0'; // Terminador de string
        }
        
        // Saída das representações
        printf("Mão Esquerda: %s\n", left_hand);
        printf("Mão Direita : %s\n", right_hand);
        
        // Pergunta ao usuário se deseja continuar
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);  // Note o espaço antes de %c para ignorar espaços em branco
        
        // Limpa o buffer de entrada para evitar problemas com o próximo scanf
        while (getchar() != '\n'); 
        
    } while (continuar == 'S' || continuar == 's');
    
    printf("Programa encerrado.\n");
    
    return 0;
}
