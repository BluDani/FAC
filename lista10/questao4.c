/*
QUEST�O 04:
A fun��o logar�tmica � complementar �
potencia��o. Ou seja, uma vez que 3^4= 81,
podemos ent�o afirmar que log381 = 4.

Generalizando, temos que:

baseexpoente = pot ? logbasepot = expoente

Com base nessa descri��o, pede-se o
desenvolvimento de uma fun��o que, dados a e
b, calcule o valor de logab.
Nota: a sua solu��o dever� apresentar um valor
inteiro que, na verdade, ser� a solu��o aproximada
do logaritmo.
*/

#include<stdio.h>

//prot�tipo da fun��o
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
