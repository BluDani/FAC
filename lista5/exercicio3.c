#include<stdio.h>

/*
QUEST�O 03:
Fazer um programa que exiba todos os
divisores de um n�mero fornecido pelo
usu�rio.
*/

int main(){
	int inteiro, divisor, resto, i;
	
	printf("digite um numero inteiro:");
	scanf("%d", &inteiro);
	
	printf("os divisores do numero %d sao ", inteiro);
	
	for(i = 1; i <= inteiro; i++){
		divisor = inteiro / i;
		resto = inteiro % i;
		
		if(resto == 0){
			printf("%d, ", divisor);
		}
	}
}
