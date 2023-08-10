#include<stdio.h>

/*
QUESTÃO 06: 
Criar um programa que exiba os N primeiros termos da seguinte série: 
1,2,8,64,1024,... 

*/

void main(){
	int i, termo, quantidade, razao;
	
	printf("Quantidade:");
	scanf("%d", &quantidade);
	razao = 2;
	
	i = 1;
	
	do
	{
		printf("%d, ", termo);
		termo *= razao;
		razao*+ 2;
		
		i++;
	}
	while(i <= quantidade);
}
