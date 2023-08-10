/*
QUESTÃO 04: A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura
deseja saber:

a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até
R$ 1.000,00.
*/

#include<stdio.h>
#define POPULACAO 3
void main()
{
	//(cont1000) é a quantidade de pessoas com salario até R$1000,00
	int filhos, somaFilhos = 0, cont1000 = 0,i;
	float salario, somaSalario = 0, mediaSalario, mediaFilhos, maiorSalario = 0, perc1000 = 0;
	
	i = 1;
	
	do
	{
		printf("salario: ");
		scanf("%f", &salario);
		
		printf("filhos: ");
		scanf("%d", &filhos);
		
		//calculando as somas dos salários e dos números de filhos dos entrevistados
		somaSalario += salario;
		somaFilhos += filhos;
		
		//determinando o maior salário
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
		
		//determinando quantas pessoas possuem salário até R$ 1.000,00
		if(salario <= 1000){
			cont1000++;
		}
		
		i++;
	}
	while(i <= POPULACAO);
	
	//calculando as médias
	mediaSalario = somaSalario / POPULACAO;
	mediaFilhos = (float) somaFilhos / POPULACAO;
	
	//calculando o percentual de pessoas que possuem salário até R$ 1.000,00
	perc1000 = ((float)cont1000 / POPULACAO) * 100;
	
	printf ("\nMedia de salario: R$ %.2f\n", mediaSalario);
	printf ("Media do numero de filhos: %.1f\n", mediaFilhos);
	printf ("Maior salario: R$ %.2f\n", maiorSalario);
	printf ("Percentual que recebe ate R$ 1000,00: %.2f %%", perc1000);
}
