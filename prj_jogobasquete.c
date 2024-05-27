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
jogobasquete();
return 0;
}
