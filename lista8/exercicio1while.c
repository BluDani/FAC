#include<stdio.h>

void main()
{
	int a, b, c, i;
	
	printf("digite os dois valores que definem o intervalo: ");
	scanf("%d %d", &a, &b);
	
	printf("digite um numero: ");
	scanf("%d", &c);
	
	if(a < b)
	{
		i = a;
		
		while(i <= b)
		{
			if(i %c != 0)
			{
				printf("%d, ", i);
			}
			
			i++;
		}
	}
	else
	{
		i = a;
		
		while(i >= b)
		{
			if(i %c != 0)
			{
				printf("%d, ", i);
			}
			
			i--;
		}
	}
}
