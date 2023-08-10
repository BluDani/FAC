/*
QUESTÃO 06: Faça um programa que leia
200 números inteiros. Ao final, exibir:

a) O maior número fornecido, de
ordem par (isto é, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).

b) A média dos valores pares.
*/

#include<stdio.h>
#include<limits.h>

#define QUANT 5

void main()
{
	int i, numero, maior = INT_MIN, somaPares = 0, contPares = 0;
	float mediaPares;
	
	for(i = 1; i <= QUANT; i++)
	{
		printf("digite um numero: ");
		scanf("%d", &numero);
		
		if((numero % 2 == 0) && (numero > maior))
		{
			maior = numero;
		}
		
		if(numero % 2 == 0)
		{
			somaPares += numero;
			contPares++;
		}
	}
	
	mediaPares = (float) somaPares / contPares;
	
	printf ("\n\nMaior valor de ordem par: %d\n", maior);
	printf ("Media dos pares: %.2f", mediaPares);
}
