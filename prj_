#include <stdio.h>
#include <stdlib.h>

void incrementarPorValor(int x) {
	x++;
	// O escolpo desta variavel vale somente dentro da funcao
	// Voce pode inclusive chamar esta variavel de y ou de x
}
void incrementarPorReferencia(int *x){
	(*x)++;
}
int main(void) {
	int numero = 5;
	incrementarPorValor(numero);
	printf("Valor original: %d\n", numero); //Saida: valor orginal:5

	incrementarPorReferencia(&numero);
	printf("Valor modificado:%d\n", numero); //Saida: valor modificado:6

	return 0;
}
