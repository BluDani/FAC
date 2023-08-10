/*
QUEST�O 01:
Desenvolver uma fun��o que exiba os m�ltiplos
de N compreendidos no intervalo definido por
A e B.

analisando:

parametros: n, a, b
retorno: -----------
*/

#include<stdio.h>

void multiplos(int n, int a, int b){
	int i;
	
	//percorrendo os valores do intervalo de 'a' a 'b'
	for(i=a; i<=b; i++){
		
		//verificando se 'i' � m�ltiplo de 'n'
		if(i % n == 0){
			printf("%d, ", i);
		}
	}
}

void main(){
	int multiplo, a, b;
	
	printf("digite o multiplo: ");
	scanf("%d", &multiplo);
	
	printf("digite os valores de a e b: ");
	scanf("%d %d", &a, &b);
	
	printf("\n");
	
	//chamando a fun��o
	multiplos(multiplo, a, b);

	printf("\n\n");
	
	//outro exemplo de chamada
	exibirMultiplos (5, 100, 200);
}
