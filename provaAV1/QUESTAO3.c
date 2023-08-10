/*
Questão 03 [2,5 pontos]:
Fazer um programa que simule uma calculadora,
atendendo aos seguintes requisitos:

i. Deverá ser exibido um menu ao usuário com as
seguintes opções: (A) Soma, (B) Subtração; (C)
Multiplicação; (D) Divisão; (E) Limpar memória; (F)
Sair;
ii. Todas as operações deverão ser realizadas sobre
o conteúdo armazenado na memória,
inicialmente igual a 0. Por exemplo, caso o
usuário opte pela operação de soma, deverá ser
perguntado um valor e este será adicionado ao
que encontra-se na memória, atualizando-o. A
mesma ideia é aplicada às demais operações
aritméticas;
iii. O item de menu Limpar memória consistirá em
reiniciá-la com o valor 0;
iv. A execução do programa só será concluída
quando o usuário escolher a opção (f). Porém,
antes do término da execução, deve ser exibido o
valor contido na memória.
*/

#include<stdio.h>

void main()
{
	int valor1, valor2, memoria = 0;
	char a, b, c, d, e, f, escolha;
		
	do
	{
		fflush(stdin);
		printf("____________________________________");
		printf("\n\tA \t Soma\n");
		printf("\tB \t Subtracao\n");
		printf("\tC \t multiplicacao\n");
		printf("\tD \t Divisao\n");
		printf("\tE \t Limpar memoria\n");
		printf("\tF \t Sair\n");
		printf("____________________________________");
		
		fflush(stdin);
		printf("\n\ndigite o que quer fazer: ");
		scanf("%c", &escolha);
		fflush(stdin);
		escolha = toupper(escolha);
		
		//Fazendo a soma
		if(escolha == 'A')
		{
			printf("digite o primeiro valor: ");
			scanf("%d", &valor1);
			
			memoria += valor1;
		}
		
		//Fazendo a subtração
		if(escolha == 'B')
		{
			printf("digite o primeiro valor: ");
			scanf("%d", &valor1);
			
			memoria -= valor1;
		}
		
		//Fazendo a multiplicação
		if(escolha == 'C')
		{
			printf("digite o primeiro valor: ");
			scanf("%d", &valor1);
			
			memoria *= valor1;
			
		}
		
		//Fazendo a divisão
		if(escolha == 'D')
		{
			printf("digite o primeiro valor: ");
			scanf("%d", &valor1);
			
			memoria /= valor1;
		}
		
		//Limpar memoria
		if(escolha == 'E')
		{
			memoria = 0;
		}
		
		//Sair
		if(escolha == 'F')
		{
			printf("\nvalor contido na memoria: %d", memoria);
		}
	}
	while(escolha != 'F');
}
