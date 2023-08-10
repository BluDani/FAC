#include<stdio.h>

/*
QUEST�O 04: Desenvolva um algoritmo que
calcule o consumo de combust�vel de um
autom�vel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quil�metros) da viagem; ii) o n�mero de
quil�metros que o carro percorre com um litro
de combust�vel (km/l); e iii) o pre�o do litro do
combust�vel.

Ao final, o algoritmo deve determinar:

: A quantidade de combust�vel, em litros,
consumida durante a viagem;
: O custo total de combust�vel.
*/

int main(){
	//percurso da viagem (pv)
	//quil�metros percorridos com 1 litro de combustivel (km)
	//pre�o do litro de combustivel (preco)
	float percurso, km, preco;
	
	//litro de combustivelusado (l)
	//pre�o total do litro (t)
	float litros, total;
	
	printf("percurso da viagem:");
	scanf("%f", &percurso);
	printf("quilometros que o carro percorre com um litro de combustivel:");
	scanf("%f", &km);
	printf("preco do combustivel:");
	scanf("%f", &preco);
	
	//calcular litros usados
	litros = percurso/km;
	//calcular pre�o total do litro
	total = litros*preco;
	
	printf("a quantidade de combustivel usada na viagem foi %.2f litros e o custo total de combustivel foi R$%.2f", litros, total);
	
}
