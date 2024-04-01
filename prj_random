#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	printf("loteria\nescolha um número entre 0 e 100\n");
	srand(time(NULL));
	int numeroSorteado = rand() % 101;
	int numeroEscolhido;
	fflush(stdout);
	scanf("%d", &numeroEscolhido);
	if (numeroEscolhido == numeroSorteado) {
		printf("você ganhou!");
	} else {
		printf("você perdeu, o número sorteado foi %d", numeroSorteado);
		return 0;
	}
}
