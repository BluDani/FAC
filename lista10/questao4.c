/*
QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3^4= 81,
podemos então afirmar que log381 = 4.

Generalizando, temos que:

baseexpoente = pot ? logbasepot = expoente

Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo.
*/

#include<stdio.h>

//protótipo da função
int exibirLogaritmo(int a, int b);

void main(){
	
	int base, expoente;
	
	printf("digite a base: ");
	scanf("%d", &base);
	
	printf("digite o expoente: ");
	scanf("%d", &expoente);
	
	exibirLogaritmo(base, expoente);
	
}

int exibirLogaritmo(int a, int b){
	
	int i, potencia = a;
	
	i = 1;
	do{
		potencia *= a;
		
		i++;
		
	}
	while(potencia < b);
	
	return i;
	
}

/*
void exibirLogaritmo(int a, int b){
	
	int i, potencia = a;
	
	i = 1;
	do{
		potencia *= a;
		
		i++;
		
	}
	while(potencia < b);
	
	printf("log%d %d = %d", a, b, i);
}
*/
