#include<stdio.h>

/*
QUESTÃO 05: O cardápio de uma lanchonete é
o seguinte:

Especificação 			Código 		Preço
Cachorro quente 	   	 100 		3,50
Bauru simples 			 101 		4,50
Bauru com ovo 			 102 		5,20
Hamburger 				 103 		3,00
Cheeseburger 			 104 		4,00
Refrigerante 			 105 		2,50

Escrever um algoritmo que obtenha o código
do item pedido, a quantidade e calcule o valor
a ser pago.

Considere que, a cada execução do algoritmo,
somente será calculado o valor relacionado a
um item.
*/

int main(){
	//codigo do pedido (cod)
	//quantidade (q)
	int cod, q;
	//preço (p)
	//valor a ser pago (vp)
	float preco, vp;
	
	printf("Especificacao 		Codigo 		Preco\n");
	printf("Cachorro quente 	100 		3,50\n");
	printf("Bauru simples 		101 		4,50\n");
	printf("Bauru com ovo 		102 		5,20\n");
	printf("Hamburger 		103 		3,00\n");
	printf("Cheeseburger 		104 		4,00\n");
	printf("Refrigerante 		105 		2,50\n");
	
	printf("\ncodigo do pedido:");
	scanf("%d", &cod);
	printf("quantidade:");
	scanf("%d", &q);
	
	if(cod == 100){
		preco = 3.50;
	}
	else{
		if(cod == 101){
			preco = 4.50;
		} 
		else{
			if(cod == 102){
				preco = 5.20;
			}
			else{
				if(cod == 103){
					preco = 3.00;
				}
				else{
					if(cod == 104){
						preco = 4.00;
					}
					else{
						preco = 2.50;
					}
				}
			}
		}
	}
	
	//calcular valor a ser pago
	vp = q * preco;
	
	printf("o valor a ser pago e de R$%.2f ", vp);
}
