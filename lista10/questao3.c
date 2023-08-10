/*
QUEST�O 03:
Fazer uma fun��o leituraDados que permane�a
lendo valores reais at� que o n�mero 0 seja
digitado. Ao final, a fun��o deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.
*/

#include<stdio.h>
#include<limits.h>

void leituraDados(){
	
	int valor, i, cont = 0, maior = INT_MIN;
	
	valor = 1;
	
	do{
		
		if(valor > maior){
			maior = valor;
		}
		
		printf("Digite um numero: ");
		scanf("%d", &valor);
		
		if(valor != 0){
			cont++;
		}
	}
	while(valor != 0);
	
	printf("\nQuantidade de elementos fornecidos: %d", cont);
	printf("\nMaior elemento fornecido: %d", maior);
}

void main(){
	
	leituraDados();
}
