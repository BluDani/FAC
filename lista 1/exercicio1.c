#include<stdio.h>

/*
QUEST�O 01:
O custo ao consumidor de um carro novo � a
soma do custo de f�brica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de f�brica). Desenvolver um algoritmo
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
	
	//calcular pre�o de fabrica
	cc = (p+i)* cf/100;
	
	printf("o valor do carro e de %.3f", cc);
}
