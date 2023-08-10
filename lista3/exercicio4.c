#include<stdio.h>

/*
QUESTÃO 04:
Implementar um programa que leia um valor
inteiro n1. Se este não estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usuário informando que o número é inválido e,
em seguida, a execução do programa terminará.
Caso o valor esteja no intervalo definido, o
programa deverá criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de
n1, porém em ordem crescente.

Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124

Nota:
Como definido no enunciado, n1 consiste em um
número inteiro positivo, com 3 algarismos. n2
também será um único número!
*/

int main(){
	//numero digitado (n1)
	//centena (valor1)
	//dezena (valor2)
	//unidade (valor3)
	int n1, valor1, valor2, valor3;
	//valor em ordem crescente (n2)
	int n2, resto, maior, meio, menor;
	
	printf("digite o valor inteiro:");
	scanf("%d", &n1);
	
	if(n1 >= 100 && n1 <=999){
		valor1 = n1 / 100;
		resto = n1 % 100;
		
		valor2 = resto / 10;
		resto = n1 % 10;
		
		valor3 = resto/1;
		
		if(valor1 > valor2 && valor1 > valor3){
			maior = valor1;
			
			if(valor2 > valor3){
				meio = valor2;
				menor = valor3;
			}
			else{
				if(valor3 > valor2){
					meio = valor3;
					menor = valor2;
				}
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
				if(valor3 > valor2){
					maior = valor3;
					
					if(valor2 > valor1){
					meio = valor2;
					menor = valor1;
					}
					else{
						meio = valor1;
						menor = valor2;
					}
				}
				else{
					if(valor1 == valor2 || valor1 == valor3){
						maior = valor1;
						meio = valor2;
						menor = valor3;
					}
					else{
						if(valor2 == valor3){
							maior = valor2;
							meio = valor3;
							menor = valor1;
						}
					}
				}
			}
		}
		
		printf("\no n1 e %d", n1);
		printf("\no n2 e %d%d%d", menor, meio, maior);
	}
	else{
		printf("\n[ERROR] nunero invalido, tente novamente");
	}
}
