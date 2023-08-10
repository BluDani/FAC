/*
QUEST�O 01:
Desenvolver uma fun��o que, dado um n�mero
inteiro n, exiba todos os n�meros existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem m�ltiplos de n.
*/

#include<stdio.h>

//prototipo da fun��o
void exibirNumeros(int n, int a, int b);


void main(){
	
	int numero, valor1, valor2;
	
	printf("digite o multiplo: ");
	scanf("%d", &numero);
	
	printf("digite o valor1: ");
	scanf("%d", &valor1);
	
	printf("digite o valor2: ");
	scanf("%d", &valor2);
	
	exibirNumeros(numero, valor1, valor2);
	
}

void exibirNumeros(int n, int a, int b){
	int i;
	
	if(a < b){
		
		for(i = a; i < b; i++){
			
			if(i % n != 0){
				printf("%d, ", i);
			}
		}
	}
	else{
		
		for(i = a; i > b; i--){
			
			if(i % n != 0){
				printf("%d, ", i);
			}
		}
	}
}
