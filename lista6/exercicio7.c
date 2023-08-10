/*
QUESTÃO 07: Faça um programa que leia
150 números reais e, ao final, exiba:

a) A soma dos 50 primeiros;

b) menor número do 51° ao 100°
valores fornecidos;

c) A média entre os últimos 50
valores.
*/

#include<stdio.h>
#include<limits.h>

#define QUANT 15

void main()
{
	int i, numero, soma = 0, menor = INT_MAX, somaUltimo = 0;
	float media;
	
	for(i = 1; i<= QUANT; i++)
	{
		printf("digite um numero: ");
		scanf("%d", &numero);
		
		if(i <= 5)
		{
			soma += numero;
		}
		
		if((i >= 6) && (i <=10))
		{
			if(numero < menor){
				menor = numero;
			}
		}
		
		if((i >= 11) && (i <= 15))
		{
			somaUltimo += numero;
		}
	}
	
	media = (float)somaUltimo / (QUANT/3);
	
	printf("\nA soma dos 5 primeiros numeros e igual a %d", soma);
	printf("\nO menor numero do segundo grupo e %d ", menor);
	printf("\nA media do terceiro grupo e %.2f", media);
}
