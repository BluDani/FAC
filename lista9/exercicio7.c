/*
QUESTÃO 07:
Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.

Exemplo:

n = 6
a = 10 e b = 20

Resposta = 7 (pois os números 10, 12, 14,
15, 16, 18 e 20 possuem divisores em
comum com o número 6).

parametros: numero, a, b
retorno: quantidade de divisores comuns
*/

#include<stdio.h>

int quantidadeValores(int n, int a, int b){
	
	int i, j, cont = 0, div;
	
	//variando o intervalo
	for(i=a; i<=b; i++){
		
		//inicializando a quantidade de divisores
		//comuns entre 'i' e 'n'
		div = 0;
		
		//verificando divisores de 'i'
		for(j=2; j<=i; j++){
			
			//verificando se 'j' é divisor de 'i' e de 'n'
			if((i % j ==0) && (n % j ==0)){
				
				div++;
			}
		}
		
		//verificando se existem divisores comuns entre 'i' e 'n'
		if(div > 0){
			cont++;
		}
	}
	
	return cont;
}

void main(){
	int numero, valor1, valor2, resultado;
	
	printf("digite um valor: ");
	scanf("%d", &numero);
	
	printf("digite os intervalos: ");
	scanf("%d %d", &valor1, &valor2);
	
	resultado = quantidadeValores(numero, valor1, valor2);
	
	printf("\nForam encontrados %d valores", resultado);
}
