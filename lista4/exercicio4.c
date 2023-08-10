#include<stdio.h>

/*
QUESTÃO 04: Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:

a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.
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
