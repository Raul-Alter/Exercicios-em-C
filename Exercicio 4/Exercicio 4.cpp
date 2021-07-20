/*
4 - Utilizando a estrutura de repetição do-while, com base na fórmula [ area = (base * altura) / 2 ],
faça um algoritmo para ler a base e a altura de um triângulo. Ao término do processamento imprima a área calculada.
Execute este algoritmo 6 vezes.
*/

#include <stdio.h>

int main() {
	
	int cont = 0;
	float area, base, alt;
	
	printf("Calculador de Area de Triangulo \n");
	do {
		
		printf("Digite o valor da base do triangulo: ");
		scanf("%f", &base);
		
		printf("Digite o valor da altura do triangulo: ");
		scanf("%f", &alt);
		
		area = (base * alt)/2;
		printf("A area do triangulo e: %.2f \n", area);
		
		cont++;
	} while(cont <= 5);
	
	return 0;
}
