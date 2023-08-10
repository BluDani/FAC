#include<stdio.h>

//FUNÇÕES caso 0

int fatorial(){
	int numero, resultado = 1, i;
	
	printf("digite um numero:");
	scanf("%d", &numero);
	
	for(i = 2; i <= numero; i++){
		resultado = resultado * i;
	}
	printf("\n%d! = %d", numero, resultado);
}

int main(){
	
	fatorial();
}
