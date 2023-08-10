/*
Atividade 2

Desenvolver uma função que, dados um
número real num1 e um valor inteiro
num2, determine o maior múltiplo de
num2 que seja inferior ou igual a num1,
assim como o menor múltiplo de num2 que
seja maior do que num1, conforme
exemplos apresentados na tabela abaixo:

Exemplos 	Num1 	Num2 	Valores calculados
Ex.1 		7,85 	 3 			 6 e 9
Ex.2 		10,0 	 2 			10 e 12
*/

#include<stdio.h>

//protótipo da função
void derterminandoMultiplos(float num1, int num2, int *menor, int *maior);

void main(){
	
	float valor1;
	int valor2, menorMultiplo = 0, maiorMultiplo;
	
	printf("Digite um valor real: ");
	scanf("%f", &valor1);
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor2);
	
	derterminandoMultiplos(valor1, valor2, &maiorMultiplo, &menorMultiplo);
	
	printf("\n\nO maior multiplo inferior a %.2f e %d\n", valor1, maiorMultiplo);
	printf("O menor multiplo superior a %.2f e %d", valor1, menorMultiplo);
}

void derterminandoMultiplos(float num1, int num2, int *maior, int *menor){
	
	int i;
	
	for (i = num2; i <= num1; i+=num2){
		
		(*maior) = i;
	}
	
	(*menor) = i;
}
