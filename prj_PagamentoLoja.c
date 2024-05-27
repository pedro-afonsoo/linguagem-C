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
int main(){
PagamentoLoja();
return 0;
}
