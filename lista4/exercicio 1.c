#include<stdio.h>

int main(){
	int inteiro, multiplo, resultado, i;
	
	printf("digite o numero inteiro:");
	scanf("%d", &inteiro);
	printf("digite o multiplo:");
	scanf("%d", &multiplo);
	
	printf("os multiplos de %d sao: ", inteiro);
	for(i = multiplo; i < inteiro; i = multiplo + i ){
		printf("%d, ", i);
	}
}
