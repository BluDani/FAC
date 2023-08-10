/*
QUESTÃO 02: Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido.
*/

#include<stdio.h>
#include<limits.h>

void main(){
	//int i, n, maior = -9999, menor = 9999, numero;
	int i, n, maior = INT_MIN, menor = INT_MAX, numero;
	
	//obtendo a quantidade de valores que serão fornecidos
	printf("digite a quantidade de valores: ");
	scanf("%d", &n);
	
	i = 1;
	
	while(i <= n)
	{
		printf("digite um numero: ");
		scanf("%d", &numero);
		
		//verificando se 'numero' é o maior de todos
		if(numero > maior){
			maior = numero;
		}
		
		//verificando se 'numero' é o menor de todos
		if(numero < menor){
			menor = numero;
		}
		
		i++;
	}
	
	printf("\no maior numero e %d", maior);
	printf("\no menor numero e %d", menor);
}
