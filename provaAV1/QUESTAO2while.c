/*
Questão 02 [2,5 pontos]:
Implementar um programa que exiba as N primeiras
potências de X, onde N e X são valores fornecidos pelo
usuário.

Exemplo:

N = 6
X = 3

Resultado: 1, 3, 9, 27, 81, 243

Observações:
- Não deve ser utilizada a função pow na solução desta
questão;
- Devem ser apresentadas três versões do programa,
cada uma utilizando uma estrutura de repetição
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
