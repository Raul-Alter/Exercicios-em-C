/*
1 - Encontrar e apresentar o valor para Z aplicando a seguinte fórmula: Z = (L + A * 2.3) / C
*/
#include <stdio.h>

int main() {

	float l, a, c, z;

	printf("Dada a formula:  Z = (L + A * 2.3)/C \n");
	printf("Defina as seguintes variaveis: \n");

	printf("L: ");
	scanf("%f", &l);

	printf("A: ");
	scanf("%f", &a);

	printf("C: ");
	scanf("%f", &c);
	
	z = (l + a * 2.3)/c;
	
	printf("O resultado do calculo e: %.2f", z);	
	
	return 0;
}
