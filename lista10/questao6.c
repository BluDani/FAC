/*
QUESTÃO 06:
Desenvolver uma função que, dado um número
inteiro N, calcule o valor do seguinte
somatório:

S = 1 + (n-1)^1 / 1! + (n-2)^2 / 2! + (n-3)^3 / 3! ... + 1^n-1 / (n - 1)!
*/

#include<stdio.h>

//protótipo das funções
int fatorial(int n);


void main(){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	return 0;
}

int fatorial(int n){
	
	int i, fatorial = 1;
	
	for(i = 1; i <= n; i++){
		
		fatorial *= i;
	}
	
	return fatorial;
}

int calcularNumerador(int n, int x){
	
	int i, potencia = 1;
	
	for(i = 1; i <= x; i++){
		
		potencia *= (n - x);
	}
	
	return fatorial;
}

int somatorio
