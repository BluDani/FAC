#include<stdio.h>

/*
QUESTÃO 01:
O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.
*/

int main(){
	//custo de fabrica (cf)
	//porcentagem do distribuidor (p)
	//imposto (i)
	//custo de fabrica (cc)
	float cf, p, i, cc;
	
	printf("custo de fabrica:");
	scanf("%f", &cf);
	printf("porcentagem do distribuidor:");
	scanf("%f", &p);
	printf("imposto:");
	scanf("%f", &i);
	
	//calcular preço de fabrica
	cc = (p+i)* cf/100;
	
	printf("o valor do carro e de %.3f", cc);
}
