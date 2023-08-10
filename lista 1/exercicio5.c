#include<stdio.h>

/*
QUESTÃO 05:
Escrever um algoritmo que, dada uma quantia
em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.
*/

int main(){
	int quantia, resto;
	//nota de 100(n100) nota de 50(n50) nota de 20(n20)...
	int n100, n50, n20, n10, n5, n2, n1;
	
	printf("qual a quantia:");
	scanf("%d", &quantia);
	
	//calculando o menor numero de notas e moedas
	n100 = quantia/100;
	resto = quantia%100;
	
	n50 = resto/50;
	resto = resto%50;
	
	n20 = resto/20;
	resto = resto%20;
	
	n10 = resto/10;
	resto = resto%10;
	
	n5 = resto/5;
	resto = resto%5;
	
	n2 = resto/2;
	resto = resto%2;
	
	n1 = resto/1;
	resto = resto%1;
	
	printf("deu %d nota de 100 reais, %d nota de 50 reais, %d nota de 20 reais, %d nota de 10 reais, %d nota de 5 reais, %d nota de 2 reais e %d moedas de 1 real", n100, n50, n20, n10, n5, n2, n1);
}
