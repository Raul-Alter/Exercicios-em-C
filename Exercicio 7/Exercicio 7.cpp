/*
7 - Solicitando ao usuário 10 valores maiores que zero (bloquear com estrutura de repetição),
os quais devem ser armazenados num único vetor, apresente o maior, o menor e as posições em 
que os mesmos foram informados.
*/

#include <stdio.h>

main(){
	int vet[10], i, poma, maior, menor, pome;
	
	printf("Digite 10 valores maiores que 0: \n");
	
	for(i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
	}
	maior = vet[0];
	poma = 0;
	for(i = 1; i < 10; i++) {
		if(vet[i] > maior) {
			maior = vet[i];
			poma = i;
		}
	}
	menor = vet[0];
	pome = 0;
	for(i = 1; i < 10; i++) {
		if(vet[i] < menor) {
			menor = vet[i];
			pome = i;
		}
	}
	
	printf("Maior valor: %d |", maior);
	printf(" Posicao: %d \n", poma);
	printf("Menor valor: %d |", menor);
	printf(" Posicao: %d", pome);
}
