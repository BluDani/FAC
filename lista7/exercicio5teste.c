#include<stdio.h>

/*
QUEST�O 05: Uma pesquisa foi feita
coletando informa��es (idade, altura e
peso) de um grupo de pessoas.
Pede-se a implementa��o de um programa
que proceda com a leitura de tais
informa��es (at� que o usu�rio opte por
concluir a entrada de dados) e calcule:

- A quantidade de pessoas com idade
superior a 50 anos;
- A m�dia de altura das pessoas com mais de
80 kg;
- O maior peso dentre as pessoas acima de
1.65 m de altura e com idade inferior a 30
anos.
*/

void main()
{
	int idade, i;
	float altura, peso;
	char continuar;
	
	i = 1;
	
	do
	{
		printf("Idade: ");
		scanf("%d", &idade);
		
		printf("Altura: ");
		scanf("%f", &altura);
		
		printf("Peso: ");
		scanf("%f", &peso);
		
		fflush(stdin);
		printf("deseja continuar [S/N]: ");
		scanf("%c", &continuar);
		fflush(stdin);
		continuar = toupper (continuar);
	}
	while(continuar != 'N');
}
