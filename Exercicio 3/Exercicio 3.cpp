/*
3 - Utilizando a estrutura de repetição while, leia 20 valores reais e escreva a somatória.
*/
#include <stdio.h>

int main() {
	
	int cont = 0;
	float num, soma = 0;
	
	while(cont <= 19) {
		
		fflush(stdin);
		
		printf("Digite um numero: ");
		scanf("%f", &num);
		
		soma = soma + num;
		cont++;
	}
	printf("A soma dos numeros digitados e: %.2f", soma);
}
