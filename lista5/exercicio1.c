#include<stdio.h>

/*
QUEST�O 01:
Dado um n�mero inteiro N, fazer um
programa que exiba os n�meros pares
iguais ou inferiores a N.
*/

int main (){
	//(inteiro) numeros inteiros
	//(pares) numeros pares do numero inteiro
	int inteiro, pares, i;
	
	printf("digite um numero inteiro:");
	scanf("%d", &inteiro);
	
	printf("os numeros pares inferiores a %d sao", inteiro);
	for(i = 2; i < inteiro; i+= 2){
		printf(" %d,", i);
	}
}
