#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//atividade 1
	void MostrarParesMultiplos3(){
		for (int i = 0; i <= 1000; i++){
			if (i % 2 == 0 && i % 3 == 0){
			}
			printf("%d", i);
		}
	}

//atividade 2
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

//atividade 3
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

//atividade 4
	void CalcularPerimetroeAreaCirculo(){
		double raio, perimetro, area;
		const double PI = 3.14;
			printf("Digite o valor do raio do círculo:");
			scanf("%lf", &raio);

			perimetro = 2 * PI * raio;
			area = PI * raio * raio;
			//para colocar raio², com a biblioteca: <math.h> - pow(raio,2)

			printf("Perímetro do círculo:%2.lf\n", perimetro);
			printf("Área do círculo:%2.lf", area);
}

//atividade 5

	void PagamentoLoja(){
	double pagamento;
		printf("		Bem vindo!\n");
		printf("Digite o valor da prestação:");
		fflush(stdout);
		scanf("%lf", &pagamento);
		if(pagamento < 300)
			printf("Sua prestação tem valor R$%.2lf, você tem a possibilidade de efetuar o pagamento a vista ou parecelado em até duas vezes.\n", pagamento);
		if(pagamento >= 300)
			printf("Sua prestação tem valor R$%.2lf, você tem a possibilidade de efetuar o pagamento a vista ou parecelado em até três vezes.\n", pagamento);
		int escolha;
		printf("		Escolha uma forma de pagamento:\n");
			printf("Se a forma de pagamento for Cartão de Crédito, digite: 1\nSe a forma de pagamento for Cartão de Debto, digite: 2\nSe a forma de pagamento for dinheiro, digite: 3\nOutro: 4\n");
			printf("Digite o número da sua escolha: ");
			fflush(stdout);
			scanf("%d", &escolha);
			if (escolha == 1) {
					printf("	Você escolheu crédito 1.\n");
				} else if (escolha == 2) {
					printf("	Você escolheu debito 2.\n");
				} else if (escolha == 3) {
					printf("	Você escolheu dinheiro 3.\n");
				} else if (escolha == 4) {
					printf("	Você escolheu outro 4.\n");
				}
	}
//atividade 6

	void DinheiroFumante() {
    	double maço, medio, ano, cigarro, dinheiro;

   	 	printf("Quantos maços você fuma por dia?\n ");
    	 	scanf("%lf", &maço);

   		 printf("Qual o preço médio de um maço?\n ");
   	 	scanf("%lf", &medio);

    		printf("Há quantos anos você fuma?\n ");
    		scanf("%lf", &ano);

    		cigarro = maço * 20 * ano * 365;
    		dinheiro = cigarro * medio / 20;

    		printf("Você fumou no total %.0lf cigarros e gastou %.2lf em %.0lf anos", cigarro, dinheiro, ano);
}
//atividade 7

void jogobasquete(){
	int altura, idade, sexo, peso,imc;
	printf("bem vindo\npara saber se vc se encaixa no time responda as perguntas:\nqual a sua altura em centrimetros?\n");
	scanf("%d",&altura);
	printf("quantos anos vc tem?\n");
	scanf("%d",&idade);
	printf("qual seu sexo?\n1.masculino\n2.feminino\n");
	scanf("%d",&sexo);
	printf("quantos kg vc pesa?\n");
	scanf("%d",&peso);
	imc = peso*10000 /pow(altura,2);
	printf("seu IMC é %d\n", imc);
	if(altura >= 180 && idade > 16 && sexo == 2 && imc <= 25){
	printf("apto a jogar no time juvenil basquete feminino.");
	}
	if(altura >= 180 && idade > 16 && sexo == 1 && imc <= 25){
	printf("apto a jogar no time juvenil basquete masculino");
	}
	if(altura < 180 && idade <= 16 && imc > 25){
	printf("não apto");
	}
}
int main(){
	//MostrarParesMultiplos3();
	//CalcularSomaeMedia();
	//CalcularAreaDosComodos();
	//CalcularPerimetroeAreaCirculo();
	//PagamentoLoja();
	//DinheiroFumante();
	jogobasquete();
return 0;
}
