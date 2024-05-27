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
