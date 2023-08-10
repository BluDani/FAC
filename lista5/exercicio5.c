#include<stdio.h>

/*
QUESTÃO 05:
Criar um programa que exiba os N
primeiros termos da seguinte série:

1,2,4,8,16,32,...
*/

void main(){
	int i, termo = 1, quantidade;
	
	printf("Quantidade: ");
	scanf("%d", &quantidade);
	
	i = 1;
	do
	{
		printf("%d, ", termo);
		termo *= 2;
		
		i++;
	}
	while(i <= quantidade);
}
