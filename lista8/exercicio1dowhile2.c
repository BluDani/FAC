#include<stdio.h>

void main()
{
	int a, b, c, i;
	
	printf("digite os dois valores que definem o intervalo: ");
	scanf("%d %d", &a, &b);
	
	printf("digite um numero: ");
	scanf("%d", &c);
	
	if (a < b)
	{
		//repeti��o crescente
		i=a;
		
		do
		{
			//verificando se 'i' n�o � m�ltiplo de 'c'
			if (i%c != 0)
			{
				printf ("%d ", i);
			}
			
			i++;
		}
		while (i<=b);
	}
	else
	{
		//repeti��o decrescente
		i=a;
		
		do
		{
			//verificando se 'i' n�o � m�ltiplo de 'c'
			if (i%c != 0)
			{
				printf ("%d ", i);
			}
			
			i--;
		}
		while (i>=b);
	}
}

