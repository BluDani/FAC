/*
QUEST�O 03: Implementar um programa
que calcule o valor de base^expoente, onde
base e expoente s�o n�meros inteiros
dados pelo usu�rio.
*/

#include<stdio.h>

void main(){
	int base, expoente, i, resultado = 1;
	
	printf("digite a base do numero: ");
	scanf("%d", &base);
	
	printf("digite o expoente do numero: ");
	scanf("%d", &expoente);
	
	for(i = 1; i <= expoente; i++)
	{
		//resultado = resultado*base;
		resultado *= base;
	}
	
	printf("\n\n%d elevado a %d e igual a %d", base, expoente, resultado);
}
