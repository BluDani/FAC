#include<stdio.h>
/*
QUESTÃO 03:
Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.

Notas:
1. Fórmulas para o cálculo das áreas:
a. Acírculo = p.raio2, onde p = 3.14159;
b. Aretângulo = base.altura;
c. Aquadrado = lado2;
d. Atriângulo = (base.altura)/2.

2. Caso o usuário escolha uma opção inválida,
uma mensagem de erro deve ser exibida e a
execução do programa terminada.
*/
int main(){
	
	//codigo da figura geometrica (cod)
	char tipo;
	float area, raio, base, altura, lado;
	const float PI = 3.14159;
	
	printf("codigo			figuras\n");
	printf("  C			circulo\n");
	printf("  R 			retangulo\n");
	printf("  Q 			quadrado\n");
	printf("  T 			triangulo\n\n");
	
	printf("escolha sua figura geometrica:");
	scanf("%c", &tipo);
	
	//tranformando "tipo" para maiúsculo
	tipo = toupper (tipo);
	
	if(tipo == 'C'){
		printf("qual o raio do circulo:");
		scanf("%f", &raio);
		area = PI* (raio*raio);
		
		printf("\na area e de %.2f", area);
	}
	else{
		if(tipo == 'R'){
			printf("qual o tamanho da base do retangulo:");
			scanf("%f", &base);
			printf("qual o tamanho da altura do retangulo:");
			scanf("%f", &altura);
			area = base * altura;
			
			printf("\na area e de %.2f", area);
		}
		else{
			if(tipo == 'Q'){
			printf("qual o tamanho do lado do quadrado:");
			scanf("%f", &lado);
			area = lado * lado;
			
			printf("\na area e de %.2f", area);
			}
			else{
				if(tipo == 'T'){
					printf("qual o tamanho da base do triangulo:");
					scanf("%f", &base);
					printf("qual o tamanho da altura do triangulo:");
					scanf("%f", &altura);
					area = (base * altura)/2;
					
					printf("\na area e de %.2f", area);
				}
				else{
					printf("\n[ERRO] informacoes invalidas, tente novamente");
				}
			}
		}
	}
	
}
