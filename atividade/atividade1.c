/*
Atividade 1

A tabela abaixo resume os valores unitários
dos produtos vendidos por determinada
loja:

Código do Produto	 Valor unitário
	   101 				3,50
	   102 				5,00
	   103 				7,80
	   104 				5,00
	   105 				8,20
	   106 				6,40
	   107 				4,75
	   108 				3,60
       109 				6,00
	   110 				4,30

Pede-se o desenvolvimento de uma função
que, dado um código de produto e uma
quantidade a ser adquirida, determine o
valor total da compra.

Nota: caso o código seja inválido (ou seja, não
esteja na tabela), a função deverá retornar o
valor -1.

Exemplo 1:
Código: 101 + Quantidade: 3 ? Valor: 10,50

Exemplo 2:
Código: 111 + Quantidade: 4 ? Valor: -1
*/

#include<stdio.h>

//protótipo da função
float valorTotalCompra(int cod, int quant);

void main(){
	
	int codigo, quantidade;
	float resultado;
	
	printf("Codigo do Produto\t\tValor unitario\n");
	printf("\t101\t\t\t   3,50\n");
	printf("\t102\t\t\t   5,00\n");
	printf("\t103\t\t\t   7,80\n");
	printf("\t104\t\t\t   5,00\n");
	printf("\t105\t\t\t   8,20\n");
	printf("\t106\t\t\t   6,40\n");
	printf("\t107\t\t\t   4,75\n");
	printf("\t108\t\t\t   3,60\n");
	printf("\t109\t\t\t   6,00\n");
	printf("\t110\t\t\t   4,30\n\n\n");
	
	printf("Digite o codigo: ");
	scanf("%d", &codigo);
	
	printf("Digite a quantidade: ");
	scanf("%d", &quantidade);
	
	resultado = valorTotalCompra(codigo, quantidade);
	
	printf("\nO valor total da compra e %.2f", resultado);
	
}

float valorTotalCompra(int cod, int quant){
	
	float valor, total;
	
	switch (cod){
		
		case 101: valor = 3.50;
		break;
		
		case 102: valor = 5.00;
		break;
		
		case 103: valor = 7.80;
		break;
		
		case 104: valor = 5.00;
		break;
		
		case 105: valor = 8.20;
		break;
		
		case 106: valor = 6.40;
		break;
		
		case 107: valor = 4.75;
		break;
		
		case 108: valor = 3.60;
		break;
		
		case 109: valor = 6.00;
		break;
		
		case 110: valor = 4.30;
		break;
		
		default: return -1;
	}
	
	total = quant * valor;
	
	return total;
}


