/*
Fazer uma função que, dado um número inteiro n, calcule o valor de s, conforme apresentado
abaixo:

s = 1/n - 2^2/n-1 + 3^3/n-2 - 4^4/n-3 + ... n^n
*/

#include <stdio.h>

//protótipo da função
float calculandoS(int n);
int calculandoNumerador(int n);
int calculandoDenominador(int n, int i);

void main(){
	
	int numero;
	float resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	resultado = calculandoS(numero);
	
	printf("\n%.2f", resultado);
	
}


float calculandoS(int n){
	
	int denominador, numerador, i;
	float s;
	
	
	for(i=1; i<= n; i++){
		
		numerador = calculandoNumerador(i);
		denominador = calculandoDenominador(n, i);
	
		s += (float) numerador/ denominador;
		
	}
	
	return s;
}


int calculandoNumerador(int n){
	
	int i, j, pot;
	
	for(i=1;i<=n;i++){
		
		pot = i;
		for(j = 1; j <= i; j++){
			
			pot *= i;
			
		}
	}
	
	pot /= (j - 1);
	
	if(pot % 2 == 0){
		
		pot*= -1;
	}
	
	return pot;
}

int calculandoDenominador(int n, int i){
	
	int denominador = 0;
	
	denominador = n - i + 1;
	
	return denominador;
}	
