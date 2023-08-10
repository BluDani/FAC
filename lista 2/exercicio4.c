#include<stdio.h>

/*
QUESTÃO 04: Desenvolva um algoritmo que
calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quilômetros) da viagem; ii) o número de
quilômetros que o carro percorre com um litro
de combustível (km/l); e iii) o preço do litro do
combustível.

Ao final, o algoritmo deve determinar:

: A quantidade de combustível, em litros,
consumida durante a viagem;
: O custo total de combustível.
*/

int main(){
	//percurso da viagem (pv)
	//quilômetros percorridos com 1 litro de combustivel (km)
	//preço do litro de combustivel (preco)
	float percurso, km, preco;
	
	//litro de combustivelusado (l)
	//preço total do litro (t)
	float litros, total;
	
	printf("percurso da viagem:");
	scanf("%f", &percurso);
	printf("quilometros que o carro percorre com um litro de combustivel:");
	scanf("%f", &km);
	printf("preco do combustivel:");
	scanf("%f", &preco);
	
	//calcular litros usados
	litros = percurso/km;
	//calcular preço total do litro
	total = litros*preco;
	
	printf("a quantidade de combustivel usada na viagem foi %.2f litros e o custo total de combustivel foi R$%.2f", litros, total);
	
}
