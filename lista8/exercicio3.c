/*
Quest�o 03:
	Desenvolver um programa que leia dois n�meros inteiros n1 e n2 e determine se 
	n2 consiste em n1 com seus algarismos embaralhados.
	
	Exemplos:
			n1: 1234		n2: 1342
			Resposta: SIM
			
			n1: 1254		n2: 1342
			Resposta: N�O
			

	Nota: considerar que n�o existem algarismos repetidos no mesmo n�mero.
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

void main()
{
	int n1, n2, valor1, valor2, alg1, alg2, cont, fim = FALSE;
	
	printf("digite dois valores: ");
	scanf("%d %d", &n1, &n2);
	
	//decompondo 'n1' em seus algarismos
	valor1 = n1;
	
	do
	{
		alg1 = valor1 % 10;
		valor1 = valor1 / 10;
		
		cont = 0;
		
		//decompondo 'n2' em seus algarismos
		valor2 = n2;
		
		do
		{
			alg2 = valor2 % 10;
			valor2 = valor2 / 10;
			
			//comparando 'alg1' com cada algarismo de 'n2'
			if(alg1 == alg2)
			{
				cont++;
			}
		}
		while(valor2 != 0);
		
		if(cont == 0)
		{
			fim = TRUE;
		}
	}
	while((valor1 != 0) && (fim == FALSE));
	
	//testando o fim
	if(fim == TRUE)
	{
		printf ("\nO numero %d NAO consiste em %d embaralhado!\n", n2, n1);
	}
	else
	{
		printf ("\nO numero %d consiste em %d embaralhado!\n", n2, n1);
	}
	
}
