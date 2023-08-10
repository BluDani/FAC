#include<stdio.h>

/*
QUESTÃO 03: As vendas parceladas se
tornaram uma ótima opção para os lojistas que,
a cada dia, criam novas promoções para tentar
conquistar novos clientes. Faça um algoritmo
que permita ao lojista informar o preço do
produto e receber as seguintes informações:

a) O valor com 10% de desconto para
pagamento à vista;
b) O valor da prestação para parcelamento
sem juros, em 5x;
c) O valor da prestação para parcelamento
com juros, em 10x, com 20% de acréscimo
no valor do produto.
*/

int main(){
	float preco, avista, semJuros, comJuros;
	
	printf("valor do produto:");
	scanf("%f", &preco);
	
	//calculando os valores das diversas formas de pagamento
	
	avista = preco - (preco * 0.1);
	
	semJuros = preco / 5;
	
	comJuros = (preco + preco*0.2)/10;
	
	printf("preco: %.2f\n", preco);
	printf("a vista: %.2f\n", avista);
	printf("parcelado 5x sem juros: %.2f\n", semJuros);
	printf("parcelado 10x com juros: %.2f\n", comJuros);
}
