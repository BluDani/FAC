/*
Quest�o 02 [2,5 pontos]:
Implementar um programa que exiba as N primeiras
pot�ncias de X, onde N e X s�o valores fornecidos pelo
usu�rio.

Exemplo:

N = 6
X = 3

Resultado: 1, 3, 9, 27, 81, 243

Observa��es:
- N�o deve ser utilizada a fun��o pow na solu��o desta
quest�o;
- Devem ser apresentadas tr�s vers�es do programa,
cada uma utilizando uma estrutura de repeti��o
diferente (for, while e do..while).
*/

#include<stdio.h>

void main()
{
	int n, x, i, resultado = 1;
	
	printf("digite o numero de valores: ");
	scanf("%d", &n);
	
	printf("digite a potencia: ");
	scanf("%d", &x);
	
	printf("\n1, ");
	
	i = 1;
	
	while(i <= n - 1)
	{
		resultado *= x;
		printf("%d, ", resultado);
		
		i++;
	}
}
