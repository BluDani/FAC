#include<stdio.h>

/*
QUEST�O 02:
Desenvolver um programa que calcule a
soma dos n�meros de 1 a N, sendo N um
n�mero inteiro fornecido pelo usu�rio.
*/

int main(){
	//(inteiro) numero inteiro
	//(soma) a soma de todos os numeros de 1 at� o numero fornecido pelo usuario
	int inteiro, soma = 0, i;
	
	printf("digite um numero inteiro:");
	scanf("%d", &inteiro);
	
	for(i = 1; i <= inteiro; i++){
		//soma = soma + i;
		soma += i;
	}
	
	printf("a soma dos numeros de 1 ate %d e %d", inteiro, soma);
}
