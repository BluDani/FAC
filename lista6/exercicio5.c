/*
QUESTÃO 05: Elabore um programa que
calcule a média ponderada de n elementos.

Observação: na média ponderada, cada
elemento possui um peso que representa a
sua contribuição no cálculo da média final.

Exemplo:
		valor1:	10			peso1: 2
		valor2: 5			peso2: 3
		valor3: 15			peso3: 1
		valor4: 8			peso2: 2
		
		media ponderada: (10*2 + 5*3 + 15*1 + 8*2)/(2 + 3 + 1 + 2)	
		media ponderada: (20 + 15 + 15 + 16)/(8)	
		media ponderada: 66/8 = 8,25
*/

#include<stdio.h>

void main()
{
	int i, n;
	float peso, valor, numerador = 0, denominador = 0, media;
	
	printf("digite a quantidade de valores: ");
	scanf("%d", &n);
	
	for(i = 1; i <=n; i++){
		printf("\ndigite o valor: ");
		scanf("%f", &valor);
		
		printf("digite o peso desse valor: ");
		scanf("%f", &peso);
		
		numerador += (valor * peso);
		denominador += peso; 
	}
	
	media = numerador / denominador;
	
	printf("\na media final e %.2f", media);
}
