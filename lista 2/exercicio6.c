#include<stdio.h>

/*
QUESTÃO 06: Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:

a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no meio dos outros.
*/

int main(){
	//numero inteiro (i)
	int inteiro;
	float valor1, valor2, valor3;
	float maior, menor, meio;
	
	printf("i = 1: os tres valores em ordem crescente\n");
	printf("i = 2: os tres valores em ordem decrescente\n");
	printf("i = 3: o maior valor deve ser apresentado no meio dos outros\n");
	
	printf("\ndigite o valor de i:");
	scanf("%d", &inteiro);
	
	printf("digite o primeiro valor:");
	scanf("%f", &valor1);
	printf("digite o segundo valor:");
	scanf("%f", &valor2);
	printf("digite o terceiro valor:");
	scanf("%f", &valor3);
	
	if(inteiro == 1){ //se i == 1 a ordem vai ser crescente
	
		if(valor1 > valor2 && valor1 > valor3){
		maior = valor1;
		
		if(valor2 > valor3){
			meio = valor2;
			menor = valor3;
		}
		else{
			meio = valor3;
			menor = valor2;
		}
	}
	else{
		if(valor2 > valor3){
			maior = valor2;
			
			if(valor3 > valor1){
				meio = valor3;
				menor = valor1;
			}
			else{
				meio = valor1;
				menor = valor3;
			}
		}
		else{
			maior = valor3;
			
			if(valor1 > valor2){
				meio = valor1;
				menor = valor2;
			}
			else{
				meio = valor2;
				menor = valor1;
			}
		}
	}
	printf("o maior numero e %.1f \no numero do meio e %.1f \no menor numero e %.1f", maior, meio, menor);
	}
	
	//ordem decrescente
	else{
		if(inteiro == 2){ //se i == 2 a ordem vai ser decrescente
	
		if(valor1 > valor2 && valor1 > valor3){
		maior = valor1;
		
		if(valor2 > valor3){
			meio = valor2;
			menor = valor3;
		}
		else{
			meio = valor3;
			menor = valor2;
		}
	}
	else{
		if(valor2 > valor3){
			maior = valor2;
			
			if(valor3 > valor1){
				meio = valor3;
				menor = valor1;
			}
			else{
				meio = valor1;
				menor = valor3;
			}
		}
		else{
			maior = valor3;
			
			if(valor1 > valor2){
				meio = valor1;
				menor = valor2;
			}
			else{
				meio = valor2;
				menor = valor1;
			}
		}
	}
	 printf("o menor numero e %.1f \no numero do meio e %.1f \no maior numero e %.1f", menor, meio, maior);
	}
	
	else{
		if(inteiro == 3){ //se i == 3 o maior numero ficara no meio
	
		if(valor1 > valor2 && valor1 > valor3){
		maior = valor1;
		
		if(valor2 > valor3){
			meio = valor2;
			menor = valor3;
		}
		else{
			meio = valor3;
			menor = valor2;
		}
	}
	else{
		if(valor2 > valor3){
			maior = valor2;
			
			if(valor3 > valor1){
				meio = valor3;
				menor = valor1;
			}
			else{
				meio = valor1;
				menor = valor3;
			}
		}
		else{
			maior = valor3;
			
			if(valor1 > valor2){
				meio = valor1;
				menor = valor2;
			}
			else{
				meio = valor2;
				menor = valor1;
			}
		}
	}
	
	printf("\no numero do meio e %.1f \no maior numero e %.1f \no menor numero e %.1f", meio, maior, menor);
 }
}
}
}
