/*
QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.

parametros: 
retorno: mdc
*/

#include<stdio.h>

int mdc (int num1, int num2){
	
	int menor, i, resultado;
	
	//determinando o menor entre os valores
	if(num1 < num2){
		menor = num1;
	}
	else{
		menor = num2;
	}
	
	//variando os números de 1 a 'menor'
	for(i = 1; i <= menor; i++){
		
		//verificando se 'i' é divisor dos dois números
		if((num1 %i == 0) && (num2 %i == 0)){
			resultado = i;
		}
	}
	return resultado;
}

void main(){
	
	int valor1, valor2, resultado;
	
	printf("digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("digite o segundo valor: ");
	scanf("%d", &valor2);
	
	resultado = mdc (valor1, valor2);
	
	printf("\n\nMDC(%d, %d) = %d", valor1, valor2, resultado);
}
