/*
Quest�o 02 [2,5 pontos]:

Implementar uma fun��o que, dados dois n�meros
inteiros a e b, determine a quantidade de divisores
comuns aos dois.
*/

#include<stdio.h>

//prot�tipo da fun��o
int quantidadeDivisor(int a, int b);

void main(){
	
	int valorA, valorB, resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valorA);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &valorB);
	
	resultado = quantidadeDivisor(valorA, valorB);
	
	printf("\n\nOs valores %d e %d tem %d divisores comuns", valorA, valorB, resultado);
}

int quantidadeDivisor(int a, int b){
	
	int i, menor, cont = 0;
	
	if(a < b){
		menor = a;
	}
	else{
		menor = b;
	}
	
	for(i = 1; i <= menor; i++){
		
		if((a % i == 0) && (b % i == 0)){
			
			cont++;
		}
	}
	
	return cont;
}
