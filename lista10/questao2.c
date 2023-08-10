/*
QUESTÃO 02:
Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.
*/

#include<stdio.h>

//prototipo da função
int determinarPotencia(int a, int b);

void main(){
	
	int valor1, valor2;
	
	printf("digite o intervalo: ");
	scanf("%d %d", &valor1, &valor2);
	
	determinarPotencia(valor1, valor2);
		
}

int determinarPotencia(int a, int b){
	
	int i, j, potencia = 1, cont = 0;
	
	if(a < b){
		
		for(i = a; i <= b; i++){
			printf("%d, ", i);
			
			for(j = 1; j <= b; j*=2){
				
			}
		}
	}
	
}
