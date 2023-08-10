#include<stdio.h>
/*
QUEST�O 03:
Construir um programa que permita ao usu�rio
calcular a �rea de uma figura geom�trica. Para
isto, o usu�rio dever� escolher a figura desejada
([C]�rculo, [R]et�ngulo, [Q]uadrado ou
[T]ri�ngulo) e fornecer as informa��es
necess�rias para que a �rea desta figura possa
ser calculada.

Notas:
1. F�rmulas para o c�lculo das �reas:
a. Ac�rculo = p.raio2, onde p = 3.14159;
b. Aret�ngulo = base.altura;
c. Aquadrado = lado2;
d. Atri�ngulo = (base.altura)/2.

2. Caso o usu�rio escolha uma op��o inv�lida,
uma mensagem de erro deve ser exibida e a
execu��o do programa terminada.
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
	
	//tranformando "tipo" para mai�sculo
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
