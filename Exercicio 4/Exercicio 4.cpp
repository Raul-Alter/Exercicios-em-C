/*
4 - Utilizando a estrutura de repeti��o do-while, com base na f�rmula [ area = (base * altura) / 2 ],
fa�a um algoritmo para ler a base e a altura de um tri�ngulo. Ao t�rmino do processamento imprima a �rea calculada.
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
