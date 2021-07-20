/*
9 - Desenvolva um algoritmo que crie uma variável do tipo struct com os seguintes dados (relativos a 5 clientes):
código, nome, endereço, data de nascimento (deve ser um vetor de 3 posições onde armazene dia na primeira posição,
mês na segunda e ano na terceira), sexo, valor total devido, valor total em crédito, idade e status do cadastro (ativo ou inativo).
Quando o usuário executar o algoritmo, o mesmo deve cadastrar os clientes e ao término dos cadastros, deve emitir
um relatório com os dados dos clientes cadastrados. Antes da finalização do algoritmo, deve ser emitida uma mensagem
perguntando ao usuário se ele deseja executar o algoritmo novamente, em caso afirmativo o algoritmo deve ser executado
novamente, em caso negativo, deve ser emitida uma mensagem alertando o usuário do final de execução do algoritmo.
*/

#include <stdio.h>
#include <stdlib.h>

main () {
	struct aniversario {
		int dia, mes, ano;
	};	
	
	struct banco{
		int cod, idade;
		char nome[50], end[30], gen[10], stats[10];
		float dev, cred;
		struct aniversario data;
	}cli[5];
		
	int i, d;
	char resp;
	
	do {
		for(i = 0; i <= 4; i++) {
			printf("Cadastro de Clientes\n");
			
			fflush(stdin);
			printf("\nDigite o codigo do cliente: ");
			scanf("%d", &cli[i].cod);
			
			fflush(stdin);
			printf("\nDigite o nome do cliente: ");
			gets(cli[i].nome);
			
			fflush(stdin);
			printf("\nDigite o endereco do cliente: ");
			gets(cli[i].end);
			
			fflush(stdin);
			printf("\nDigite a data de nascimento do cliente: ");
			scanf("%d %d %d", &cli[i].data.dia, &cli[i].data.mes, &cli[i].data.ano);
			
			fflush(stdin);
			printf("\nDigite o genero do cliente (masculino/feminino): ");
			gets(cli[i].gen);
			
			fflush(stdin);
			printf("\nDigite o valor total devido do cliente: ");
			scanf("%f", &cli[i].dev);
			
			fflush(stdin);
			printf("\nDigite o valor total em credito do cliente: ");
			scanf("%f", &cli[i].cred);
			
			fflush(stdin);
			printf("\nDigite a idade do cliente: ");
			scanf("%d", &cli[i].idade);
			
			fflush(stdin);
			printf("\nDigite o status do cliente (ativo/inativo): ");
			gets(cli[i].stats);
			
			system("cls");
		}
		printf("\nClientes Cadastrados:\n");
		for(i = 0; i <= 4; i++) {
			printf("\nCodigo do Cliente:                   %d\n", cli[i].cod);
			printf("\nNome do Cliente:                     %s\n", cli[i].nome);
			printf("\nEndereco do Cliente:                 %s\n", cli[i].end);
			printf("\nAniversario do Cliente:              %d/%d/%d\n", cli[i].data.dia, cli[i].data.mes, cli[i].data.ano);
			printf("\nGenero do Cliente:                   %s\n", cli[i].gen);
			printf("\nValor Total Devido do Cliente:       %.2f\n", cli[i].dev);
			printf("\nValor Total em Credito do Cliente:   %.2f\n", cli[i].cred);
			printf("\nIdade do Cliente:                    %d\n", cli[i].idade);
			printf("\nStatusdo Cliente:                    %s\n", cli[i].stats);
			printf("\n\n----------------------------------------------------------\n\n");
		}
		
		fflush(stdin);
		printf("Deseja continuar (S/N)? ");
		scanf("%c", &resp);
		system("cls");
	} while(resp == 's' || resp == 'S');
	printf("Fim da Execucao");
}
