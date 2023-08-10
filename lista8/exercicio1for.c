/*
Questão 01:
Dados três números inteiros a, b e c,
implementar um programa que exiba os
números do intervalo definido por a e b
(sempre começando em a e terminando em b),
com exceção daqueles que sejam múltiplos de
c.

Exemplos:
a = 10, b = 20, c = 3
  Saída: 10, 11, 13, 14, 16, 17, 19, 20
 
a = 25, b = 18, c = 5
  Saída: 24, 23, 22, 21, 19, 18

Nota: devem ser apresentadas três versões do
programa, uma para cada estrutura de
repetição estudada.
*/
#include<stdio.h>

void main(){
	int a, b, c, i;
	
	printf("digite os dois valores que definem o intervalo: ");
	scanf("%d %d", &a, &b);
	
	printf("digite um numero: ");
	scanf("%d", &c);
	
	if(a < b)
	{
		for(i = a; i <=b; i++)
		{
			if(i%c != 0)
			{
				printf("%d, ", i);
			}
		}
	}
	else{
		
		for(i = a; i >= b; i--)
		{
			if(i%c != 0)
			{
				printf("%d, ", i);
			}
		}
	}
}
