/*
6 - Utilizando a estrutura de repeti��o for, calcule a convers�o de graus Fahrenheit para Celsius atrav�s da f�rmula [ C = (5/9) * (F-32) ].
Onde a vari�vel F da f�rmula significa �Fahrenheit� e a vari�vel C significa �Celsius�.
Escreva um algoritmo que calcule uma tabela de graus Celsius em fun��o de graus Fahrenheit que variem de 40 at� 60.
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
