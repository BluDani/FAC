#include<stdio.h>

/*
QUEST�O 07:
Escreva um algoritmo para calcular o sal�rio
semanal de uma pessoa, determinado pelas
condi��es que seguem: se o n�mero de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contr�rio, a
pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.
*/

int main(){
	//salario trabalhado (ht)
	//salario por hora (sh)
	float ht, sh, salario;
	
	printf("horas trabalhadas:");
	scanf("%f", &ht);
	printf("salario por hora:");
	scanf("%f", &sh);
	
	if(ht <= 40){
		salario = ht*sh;
	}
	else{
		salario = 40*sh+ (ht-40)*sh*1.5;
	}
	
	printf("seu salario e de %.2f", salario);
}
