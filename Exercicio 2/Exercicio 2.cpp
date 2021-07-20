/*
2 - Faça um algoritmo que tendo como dados de entrada a altura e o sexo de uma pessoa
(digite "M" para Masculino e "F" para Feminino), calcule o peso ideal dessa pessoa,
utilizando-se das seguintes fórmulas:
- Para sexo Masculino: peso_i = (450.7 * altura) / 10
- Para sexo Feminino: peso_i = (400.7 * altura) / 10
*/
#include <stdio.h>

int main(){
	
	float alt, peso_i;
	char sex;
	
	printf("Digite sua altura (em metros): ");
	scanf("%f", &alt);
	
	fflush(stdin);
	
	printf("Voce e masculino ou feminino (responda com M ou F)? ");
	scanf("%c", &sex);
	
	while(sex != 'm' && sex != 'M' && sex != 'f' && sex != 'F') {
		
		fflush(stdin);
		
		printf("Digite um genero valido: ");
		scanf("%c", &sex);
	}
	if (sex == 'm' || sex == 'M') {
		peso_i = (450.7 * alt)/10;
		
		printf("Seu peso ideal e: %.2f", peso_i);
	} 
	if (sex == 'f' || sex == 'F') {
		peso_i = (400.7 * alt)/10;
		
		printf("Seu peso ideal e: %.2f", peso_i);
	}
	return 0;
}
