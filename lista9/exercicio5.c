/*
QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.

parametros: os dois numeros
retorno: mmc
*/

#include<stdio.h>

int mmc (int num1, int num2){
	
	int maior, i, resultado;
	
	//determinando o maior entre os valores
	if(num1 > num2){
		maior = num1;
	}
	else{
		maior = num2;
	}
	
	//variando os números de 'maior' até o produto entre os dois
	for(i = maior; i <= num1*num2; i++){
		
		//verificando se 'i' é múltiplo dos dois números
		if((i %num1 == 0) && (i %num2 == 0)){
			return i;
		}
	}
}

void main(){
	
	int valor1, valor2, resultado;
	
	printf("digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("digite o segundo valor: ");
	scanf("%d", &valor2);
	
	resultado = mmc (valor1, valor2);
	
	printf("\n\nMMC(%d, %d) = %d", valor1, valor2, resultado);
}
