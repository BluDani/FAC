/*
Quest�o 04 [2,5 pontos]:
Fa�a um programa que permane�a lendo valores at�
que o valor 0 seja fornecido. Para cada n�mero
digitado, o programa deve exibir a quantidade de vezes
que o mesmo foi informado em sequ�ncia.

Exemplo:
N�meros fornecidos: 1 1 1 6 6 2 3 3 1 1 4 7 7 0

Sa�da do programa: 

1 � 3 vez(es)
6 � 2 vez(es)
2 � 1 vez(es)
3 � 2 vez(es)
1 � 2 vez(es)
4 � 1 vez(es)
7 � 2 vez(es)
*/

#include<stdio.h>

void main()
{
	int valor1, valor2 = 0, alg1 = 0, alg2 = 0, cont = 0;
	
	do
	{
		alg2 = alg1;
		
		printf("\n\ndigite um valor: ");
		scanf("%d", &valor1);	
		
		//decompondo o valor
		alg1 = valor1 / 1;
		
		//verificando se eles s�o iguais
		if((alg2 == alg1) && (alg1 != 0))
		{
			cont++;
			printf("%d - %d vez(es)", valor1, cont);
		}
		else
		{
			if((alg2 != alg1) && (alg1 != 0))
			{
				cont = 0;
				cont++;
				printf("%d - %d vez(es)", valor1, cont);
			}
		}
		
	}
	while(valor1 != 0);
}
