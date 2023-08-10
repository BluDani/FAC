/*
QUESTÃO 06:
Implementar uma função que, dado um
número inteiro N, exiba uma sequência de
números como as ilustradas nos exemplos a
seguir:

Exemplo 1: N = 3

(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)

Exemplo 2: N = 5

(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1)
(3 2) (3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5
3) (5 4)

parametros: numero
retorno: --------
*/

#include<stdio.h>

void exibirCombinacoes(int n){
	int i, j;
	
	//variando o primeiro termo de 1 até N
	for(i =1; i<=n; i++){
		
		//variando o segundo termo de 1 até N
		for(j = 1; j<=n; j++){
			
			//verificando se os termos são distintos
			if(i !=j){
				
			printf("(%d, %d) ", i, j);
			
			}
		}
	}
}

void main(){
	int numero;
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	exibirCombinacoes(numero);
}
