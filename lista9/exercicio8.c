/*
QUEST�O 08:
Desenvolver uma fun��o que exiba todos os
n�meros primos inferiores a determinado valor
inteiro N.

parametros: n
retorno: -----
*/

#include<stdio.h>

void exibirPrimos(int n){
	
	int i, j, cont;
	
	//varrendo o intervalo de 2 a n-1
	for(i = 2; i < n; i++){
		
		//verificando se 'i' � primo
		cont = 0;
		
		//variando os "poss�veis divisores" de 'i'
		for(j = 1; j<= i; j++){
			
			//verificando se 'j' � divisor de 'i'
			if(i%j == 0){
				
				cont++;
			}
		}
		
		//exibindo 'i' se ele for primo
		if(cont == 2){
			printf("%d, ", i);
		}
	}
}

void main(){
	int numero;
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	exibirPrimos(numero);
}
