#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void CalcularAreaDosComodos(){
		double largura, comprimento, area, areatotal;
		for (int i = 1; i <= 4; i++){
			printf("Digite a largura do cômodo:");
			scanf("%lf", &largura);
			printf("Digite o comprimento do cômodo:");
			scanf("%lf", &comprimento);

			area = largura * comprimento;
			areatotal += area;

			printf("A área do cômodo %d é:%.2lf unidades de área\n", i, area);
		}
			printf("A área total é:%.2lf", areatotal);
			//area total aprecerá após terminar o loop
}
int main(){
CalcularAreaDosComodos();
return 0;
}
