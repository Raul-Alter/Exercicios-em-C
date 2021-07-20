/*
8 - Faça a entrada dos valores para uma matriz de tamanho (4x5) de valores inteiros.
Em seguida, encontre e imprima a somatória de cada uma das colunas da matriz.
Ao final, imprima também a somatória de todas as colunas.
*/

#include <stdio.h>

int main() {
	
	int mat[4][5];
	int lin, col, soma, somaCol[5];
	
	printf("Digite valores inteiros para preencher a matriz. \n");
	
	for(lin = 0; lin <= 3; lin++) {
		for(col = 0; col <= 4; col++) {
			printf("[%d] [%d]: ", lin, col);
			scanf("%d", &mat[lin][col]);
		}
	}
	for(col = 0; col <= 4; col++) {
		soma = 0;
		for(lin = 0; lin <= 3; lin++) {
			soma += mat[lin][col];
		}
		somaCol[col] = soma;
	}
	printf("\nSaida de dados: \n");
	for(lin = 0; lin <= 3; lin++) {
		for(col = 0; col <= 4; col++) {
			printf("%d ", mat[lin][col]);
		}
		printf("\n");
	}
	printf("\nSoma das colunas: \n");
	for(col = 0; col <= 4; col++) {
		printf("Coluna %d: %d\n", col, somaCol[col]);
	}
}
