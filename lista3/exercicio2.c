#include<stdio.h>

/*
QUESTÃO 02:
Faça um programa que, dadas duas datas (cada
qual com dia, mês e ano) fornecidas pelo
usuário, determine qual delas é a mais recente.
*/

int main(){
	int dia1, mes1, ano1;
	int dia2, mes2, ano2;
	
	//resebendo primeira data
	printf("digite a primeira data:\n");
	scanf("%d %d %d", &dia1, &mes1, &ano1);

	//recebendo segunda data
	printf("\ndigite a segunda data:\n");
	scanf("%d %d %d", &dia2, &mes2, &ano2);
	
	if(ano1 > ano2){
		printf("\na data mais recente e %d/%d/%d", dia1, mes1, ano1);
	}
	else{
		if(ano2 > ano1){
			printf("\na data mais recente e %d/%d/%d", dia2, mes2, ano2);
		}
		else{
			if(mes1 > mes2){
				printf("\na data mais recente e %d/%d/%d", dia1, mes1, ano1);
			}
			else{
				if(mes2 > mes1){
					printf("\na data mais recente e %d/%d/%d", dia2, mes2, ano2);
				}
				else{
					if(dia1 > dia2){
						printf("\na data mais recente e %d/%d/%d", dia1, mes1, ano1);
					}
					else{
						printf("\na data mais recente e %d/%d/%d", dia2, mes2, ano2);
					}
				}
			}
		}
	}
}
