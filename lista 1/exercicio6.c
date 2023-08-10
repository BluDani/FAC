#include<stdio.h>

/*
QUESTÃO 06:
Fazer um algoritmo que determine a ordem de
uma data (dia e mês) no ano.

Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano
*/

int main(){
	int dia, mes, ordem;
	
	printf("digite o dia do ano:");
	scanf("%d", &dia);
	printf("digite o mes do ano:");
	scanf("%d", &mes);
	
	switch (mes){
		case 1: ordem = dia;
		break;
		case 2: ordem = 31 + dia;
		break;
		case 3: ordem = 31 + 28 + dia;
		break;
		case 4: ordem = 31 + 28 + 31 + dia;
		break;
		case 5: ordem = 31 + 28 + 31 + 30 + dia;
		break;
		case 6: ordem = 31 + 28 + 31 + 30 + 31 + dia;
		break;
		case 7: ordem = 31 + 28 + 31 + 30 + 31 + 30 + dia;
		break;
		case 8: ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia;
		break;
		case 9: ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia;
		break;
		case 10: ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia;
		break;
		case 11: ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia;
		break;
		case 12: ordem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia;
	}
	
	printf("%d/%d - %d dia do ano", dia, mes, ordem);
}
