/*
10 - Faça um algoritmo onde no programa principal será feita a chamada a uma FUNÇÃO onde será feita a leitura de 4 notas e o cálculo da média,
em seguida, imprima as quatro notas e a média. Feito isso, volte ao programa principal, retornando a média encontrada, chame uma segunda FUNÇÃO
levando a média como parâmetro e já dentro da função diga se o aluno está ou não aprovado (média para aprovação 6.0). Após isso, volte ao programa
principal e emita uma mensagem dizendo se “deseja fazer novo cálculo S/N”, se a resposta for “N” encerre o programa, caso contrário, faça novo cálculo.
*/

#include <stdio.h>
#include <stdlib.h>

float media (float n1, float n2, float n3, float n4);
void prov(float result);

int main () {
	
	float n1, n2, n3, n4, result;
	char resp;
	
	do {
		printf("Calculo da media\n\n");
		
		printf("Digita a 1 nota: ");
		scanf("%f", &n1);
		
		printf("Digite a 2 nota: ");
		scanf("%f", &n2);
		
		printf("Digite a 3 nota: ");
		scanf("%f", &n3);
		
		printf("Digite a 4 nota: ");
		scanf("%f", &n4);
		
		result = media(n1, n2, n3, n4);
		
		printf("\n--------------------\n\n");
		printf("Nota 1: %.2f\n", n1);
		printf("Nota 2: %.2f\n", n2);
		printf("Nota 3: %.2f\n", n3);
		printf("Nota 4: %.2f\n", n4);
		printf("Media : %.2f\n", result);
		prov(result);
		
		fflush(stdin);		
		printf("\nDeseja fazer um novo calculo (S/N)? ");
		scanf("%c", &resp);
		system("cls");
	} while(resp == 's' || resp == 'S');
	printf("Fim do Programa");
}

float media (float n1, float n2, float n3, float n4){
	float result;
	result = (n1 + n2 + n3 + n4)/4;
	return(result);		
};

void prov(float result) {
	if(result >= 6) {
		printf("Aluno Aprovado\n");
	}
	if(result < 6) {
		printf("Aluno Reprovado\n");
	}
}
