/*
QUEST�O 11:
Implementar um programa no qual o
usu�rio informa um n�mero e verifica-se se
ele � um n�mero triangular.
Obs.: Um n�mero � triangular quando ele
for resultado do produto de tr�s n�meros
consecutivos.

Exemplo: 24 = 2 x 3 x 4.
*/
#include<stdio.h>

int main(){
	int numero, a, b, c, produto;
	
	printf("digite um numero:");
	scanf("%d", &numero);
	
	a = 1;
	b = 2;
	c = 3;
	
	do
	{
		produto = a*b*c;
	
	//atualizando valores
		a++;
		b++;
		c++;
		
	}
	while(produto < numero);
	
	if(produto == numero){
		printf("\no numero %d e triangular", numero);
	}
	else{
		printf("\no numero %d nao e triangular", numero);
	}
}
