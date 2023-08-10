#include<stdio.h>

int main(){
	//(valor) valor investido
	//(rendimento) rendimento fixo de %
	float valor, rendimento, resultado;
	int anos, meses;
	
	printf("quantos reais voce quer investir:");
	scanf("%f", &valor);
	printf("quantos porcentos rende por mes:");
	scanf("%f", &rendimento);
	/*
	printf("quantos anos voce quer deixar o valor rendendo:");
	scanf("%d", &anos);
	
	
	meses = anos * 12;
	
	resultado = (valor+ (valor * rendimento / 100)) * meses;
	
	printf("o dinheiro no valor de R$%f ira render R$%f em %d anos", valor, resultado, anos);
	*/
	
	for(anos =1; anos <= 10; anos++){
		meses = anos * 12;
		resultado = (valor + (valor * rendimento / 100)) *meses;
		
		printf("\no dinheiro no valor de R$%.2f ira render R$%.2f em %d anos\n", valor, resultado, anos);
	}
}
