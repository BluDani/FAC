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
		//repetição crescente
		i=a;
		
		do
		{
			//verificando se 'i' não é múltiplo de 'c'
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
		//repetição decrescente
		i=a;
		
		do
		{
			//verificando se 'i' não é múltiplo de 'c'
			if (i%c != 0)
			{
				printf ("%d ", i);
			}
			
			i--;
		}
		while (i>=b);
	}
}

