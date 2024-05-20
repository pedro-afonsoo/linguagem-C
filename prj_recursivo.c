#include <stdio.h>
#include <stdlib.h>
//Funcao recursiva padrao
int fatorialRecursivo(int n) {
	//caso base
	if (n == 0 || n == 1) {
		return 1;
	} else {
		//Chamada recursiva
		return n = fatorialRecursivo(n - 1);
	}
}
//Solucao iterativa
int fatorialComLoop(int n) {
	int resultado = 1;
	//ultilizando um loop for para multiplicar os numeros 1 a n
	for(int i = 1; i <= n; i++) {
		resultado *= i;
}
	return resultado;
}
int main(void) {
	int numero = 5;
	printf("o fatorial de %d e: %d\n", numero, fatorialReursivo(numero)); //chamando a solucao recursiva
	return 0;
}
