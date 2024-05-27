#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void CalcularSomaeMedia(){
		int numero = 0;
		int soma = 0;
			printf("digite 10 números inteiros:\n");
		for (int i = 0; i < 10; i++){
			scanf("%d", &numero );
				soma += numero;
		double media = soma/10;
			printf("A soma é:%d\n", soma);
			printf("A média é:%.2lf\n", media);
	}
}
int main(){
CalcularSomaeMedia();
return 0;
}
