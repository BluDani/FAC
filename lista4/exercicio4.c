#include<stdio.h>

/*
QUEST�O 04: Fa�a um programa que leia
300 n�meros reais. Ao final, devem ser
exibidas as seguintes informa��es:

a) A quantidade de valores negativos
digitados;
b) A m�dia dos valores positivos.
*/

int main(){
	int i, contNegativo = 0, contPositivo = 0;
	float numero,soma = 0, media;
	
	for(i = 1; i <= 4; i++){
		printf("digite um numero:");
		scanf("%f", &numero);
		
		if(numero < 0){
			//contador (cont)
			contNegativo++;
		}
		else{
			if(numero > 0){
				soma = soma + numero;
			    contPositivo++;
			}
		}
	}
	
	if(contPositivo == 0){
		printf("nao tem nenhum numero positivo");
	}
	else{
		media = soma / contPositivo;
	}
	
	printf("\na quantidade de numeros negativos e %d\n", contNegativo);
	printf("a media dos valores positivos e %.2f", media);
}
