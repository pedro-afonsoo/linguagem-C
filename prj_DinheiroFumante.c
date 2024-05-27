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
int main(){
DinheiroFumante();
return 0;
}
