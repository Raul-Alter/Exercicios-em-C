/*
5 - Elabore um algoritmo que monte um menu com as seguintes op��es:

1 � Exerc�cio 1
2 � Exerc�cio 2
3 � Exerc�cio 3
4 � Fim

Se o usu�rio executar a op��o 1, o algoritmo deve executar o exerc�cio 1 desta lista.
Se o usu�rio executar a op��o 2, o algoritmo deve executar o exerc�cio 2 desta lista.
Se o usu�rio executar a op��o 3, o algoritmo deve executar o exerc�cio 3 desta lista.
Se o usu�rio executar a op��o 4, o algoritmo deve finalizar a execu��o do algoritmo com a mensagem, �Fim de execu��o�.
Caso seja informado um n�mero diferente de 1, 2, 3 e 4, o algoritmo deve emitir a mensagem de op��o inv�lida.
*/

#include <stdio.h>

int main(void) {
	int op;
	
	printf("Menu de Exercicios \n \n");
	printf("1 - Exercicio 1 \n");
	printf("2 - Exercicio 2 \n");
	printf("3 - Exercicio 3 \n");
	printf("4 - Fim \n \n");
	printf("Digite o numero do exercicio que deseja iniciar: ");
	scanf("%d", &op);
	
	switch(op) {
		case 1: {
			
			float z, l, a, c;
			
			printf("\nExercicio 1 \n \n");
			printf("Dada a formula: Z = (L + A * 2.3)/C \n");
			printf("Digite os valores de \n");
			
			printf("L: ");
			scanf("%f", &l);
			
			printf("A: ");
			scanf("%f", &a);
			
			printf("C: ");
			scanf("%f", &c);
			
			z = (l+a*2.3)/c;
			
			printf("Com os valores fornecidos, o resultado sera: %.2f", z);
			break;
		}
		case 2: {
			float alt, peso_i;
			char sex;
		
			printf("\nExercicio 2 \n \n");
			printf("Digite sua altura (em metros): ");
			scanf("%f", &alt);
			
			fflush(stdin);
		
			printf("Digite seu genero (Digite M para masculino e F para feminino): ");
			scanf("%c", &sex);
			
			while(sex != 'f' && sex != 'F' && sex != 'm' && sex != 'M') {
				
				fflush(stdin);
				printf("Digite um genero valido: ");
				scanf("%c", &sex);
			}
			if(sex == 'f' || sex == 'F') {
				peso_i = (400.7 * alt)/10;
				
				printf("Seu peso ideal e: %.2f Kg", peso_i);
			}
			if(sex == 'm' || sex == 'M') {
				peso_i = (450.7 * alt)/10;
				
				printf("Seu peso ideal e: %.2f Kg", peso_i);
			}
			break;
		}
		case 3: {
			
			float num, soma;
			int cont=0;
			
			printf("\nExercicio 3 \n\n");
			
			while(cont <=19) {
				
				printf("Digite um numero: ");
				scanf("%f", &num);
				
				cont++;
				soma = soma + num;
			}
			printf("A soma dos valores e: %.2f", soma);
			break;
		}
		case 4:{
			printf("\nFim da Execucao");
			break;
		}
		default: {
			printf("Opcao Invalida");
			break;
		}
	}
	return 0;
}
