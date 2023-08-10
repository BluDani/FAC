/*
QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.

analisando:

parametros: celcius
retorno: Fahrenheit
*/

#include<stdio.h>

float conversao(float c){
	
	float f;
	
	//calculando a temperatura em °f
	f = 1.8 *c + 32;
	
	//retornando resultado
	return f;
	
}

void main(){
	float celcius, fahrenheit;
	
	printf("Digite a temperatura em graus celcius: ");
	scanf("%f", &celcius);
	
	fahrenheit = conversao(celcius);
	
	printf("\n\n%.1f C = %.1f F", celcius, fahrenheit);
	
	//exemplo 2 de chamada
	printf ("\n\n");
	
	for (temp=0;temp<=100;temp++)
	{
		retorno = conversao (temp);
		printf ("%d C\t\t%.1f F\n", temp, retorno);
	}
}
