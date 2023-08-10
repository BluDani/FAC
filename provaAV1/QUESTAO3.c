/*
Quest�o 03 [2,5 pontos]:
Fazer um programa que simule uma calculadora,
atendendo aos seguintes requisitos:

i. Dever� ser exibido um menu ao usu�rio com as
seguintes op��es: (A) Soma, (B) Subtra��o; (C)
Multiplica��o; (D) Divis�o; (E) Limpar mem�ria; (F)
Sair;
ii. Todas as opera��es dever�o ser realizadas sobre
o conte�do armazenado na mem�ria,
inicialmente igual a 0. Por exemplo, caso o
usu�rio opte pela opera��o de soma, dever� ser
perguntado um valor e este ser� adicionado ao
que encontra-se na mem�ria, atualizando-o. A
mesma ideia � aplicada �s demais opera��es
aritm�ticas;
iii. O item de menu Limpar mem�ria consistir� em
reinici�-la com o valor 0;
iv. A execu��o do programa s� ser� conclu�da
quando o usu�rio escolher a op��o (f). Por�m,
antes do t�rmino da execu��o, deve ser exibido o
valor contido na mem�ria.
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
		
		//Fazendo a subtra��o
		if(escolha == 'B')
		{
			printf("digite o primeiro valor: ");
			scanf("%d", &valor1);
			
			memoria -= valor1;
		}
		
		//Fazendo a multiplica��o
		if(escolha == 'C')
		{
			printf("digite o primeiro valor: ");
			scanf("%d", &valor1);
			
			memoria *= valor1;
			
		}
		
		//Fazendo a divis�o
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
