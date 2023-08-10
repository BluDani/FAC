//importação de bibliotecas
#include<stdio.h>

/*
QUESTÃO 01: O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:

		IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:

IMC em adultos 					Condição
IMC < 18,5 						Abaixo do peso
18,5 = IMC < 25,0 				Peso ideal
25,0 = IMC < 30,0 				Sobrepeso
30,0 = IMC < 35,0 				Obesidade grau I
35,0 = IMC < 40,0 				Obesidade grau II
IMC = 40,0 						Obesidade grau III
*/

int main(){
	float peso, altura;
	float imc;
	
	printf("seu peso:");
	scanf("%f", &peso);
	printf("sua altura:");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	printf("sua altura e %.2f \nseu peso e %.2f \ne seu imc e %.1f\n", altura, peso, imc);
	
	if(imc <18.5){
		printf("voce esta abaixo do peso\n");
	}
	else{
		if(imc <25.0){
			printf("voce esta no peso ideal\n");
		}
		else{
			if(imc < 30.0){
				printf("voce esta com sobrepeso\n");
			}
			else{
				if(imc < 35.5){
					printf("voce esta com obesidade grau I\n");
				}
				else{
					if(imc <40.0){
						printf("voce esta com obesidade grau II\n");
					}
					else{
						printf("voce esta com obesidade grau III");
					}
				}
			}
		}
		
	}
}
