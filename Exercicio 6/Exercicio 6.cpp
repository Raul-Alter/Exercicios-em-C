/*
6 - Utilizando a estrutura de repetição for, calcule a conversão de graus Fahrenheit para Celsius através da fórmula [ C = (5/9) * (F-32) ].
Onde a variável F da fórmula significa “Fahrenheit” e a variável C significa “Celsius”.
Escreva um algoritmo que calcule uma tabela de graus Celsius em função de graus Fahrenheit que variem de 40 até 60.
*/

#include <stdio.h>

int main() {
	
	float c, f, n;
	
	n = 5;
	
	printf("Conversor de Temperatura (Fahrenheit para Celsius) \n\n");
	
	for(f = 40; f <= 60; f++) {
		
		c = (n / 9) * (f - 32);
		
		printf("Fahrenheit: %.2f  |", f);
		printf("  Celsius: %.2f\n", c);
	}
	return 0;
}
