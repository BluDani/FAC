#include<stdio.h>

/*
QUESTÃO 08:
Faça um algoritmo para calcular a conta final de
um hóspede de um hotel, considerando que:

a) Devem ser obtidos o nome do hóspede, o
tipo do apartamento utilizado (A, B, C ou D),
o número de diárias utilizadas pelo hóspede
e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela
seguinte tabela:
Tipo de Apartamento Valor da diária
A R$ 350,00
B R$ 275,00
C R$ 200,00
D R$ 150,00
c) O valor da taxa de serviço equivale a
10% da conta.

A conta a ser apresentada ao cliente deve
conter: o nome do hóspede, o tipo do
apartamento, o valor total das diárias, o
valor do consumo interno, o subtotal, o
valor da taxa de serviço e o total geral.
*/

int main(){
	char nome[100], tipo;
	int diaria;
	
	//valor da diaria (vd)
	//taxa de serviço (taxa)
	float consumo, taxa, vd, subtotal, total;
	
	printf("codigo    	  Apartamento 	 Valor da diaria\n");
	printf("  1		    	A 				R$ 350,00\n");
	printf("  2		    	B 				R$ 275,00\n");
	printf("  3		    	C 				R$ 200,00\n");
	printf("  4		    	D 				R$ 150,00\n");
	
	printf("\ndigite seu nome:");
	scanf("%s", &nome);
	fflush(stdin);
	
	printf("tipo de apartamento:");
	scanf("%c", &tipo);
	fflush(stdin);
	printf("numero de diarias:");
	scanf("%d", &diaria);
	printf("consumo interno:");
	scanf("%f", &consumo);
	
	if(tipo == 'A'){
		vd = diaria*350;
	}
	else{
		if(tipo == 'B'){
			vd = diaria*275;
		}
		else{
			if(tipo == 'C'){
				vd = diaria*200;
			}
			else{
				vd = diaria*150;
			}
		}
	}
	
	subtotal = vd + consumo;
	taxa = subtotal * 0.1;
	total = vd + consumo + taxa;
	
	printf("\nhospede: %s\n", nome);
	printf("\no tipo de apartamento escolido foi o tipo %c\n", tipo);
	printf("o valor total das diarias R$%.2f\n", vd);
	printf("consumo interno R$ %.2f\n", consumo);
	printf("o subtotal R$%.2f\n", subtotal);
	printf("a taxa de servico R$%.2f\n", taxa);
	printf("total R$%.2f", total);
}
