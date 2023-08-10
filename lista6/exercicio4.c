/*
QUEST�O 04: A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
sal�rio e n�mero de filhos. A prefeitura
deseja saber:

a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentual de pessoas com sal�rio at�
R$ 1.000,00.
*/

#include<stdio.h>
#define POPULACAO 3
void main()
{
	//(cont1000) � a quantidade de pessoas com salario at� R$1000,00
	int filhos, somaFilhos = 0, cont1000 = 0,i;
	float salario, somaSalario = 0, mediaSalario, mediaFilhos, maiorSalario = 0, perc1000 = 0;
	
	i = 1;
	
	do
	{
		printf("salario: ");
		scanf("%f", &salario);
		
		printf("filhos: ");
		scanf("%d", &filhos);
		
		//calculando as somas dos sal�rios e dos n�meros de filhos dos entrevistados
		somaSalario += salario;
		somaFilhos += filhos;
		
		//determinando o maior sal�rio
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
		
		//determinando quantas pessoas possuem sal�rio at� R$ 1.000,00
		if(salario <= 1000){
			cont1000++;
		}
		
		i++;
	}
	while(i <= POPULACAO);
	
	//calculando as m�dias
	mediaSalario = somaSalario / POPULACAO;
	mediaFilhos = (float) somaFilhos / POPULACAO;
	
	//calculando o percentual de pessoas que possuem sal�rio at� R$ 1.000,00
	perc1000 = ((float)cont1000 / POPULACAO) * 100;
	
	printf ("\nMedia de salario: R$ %.2f\n", mediaSalario);
	printf ("Media do numero de filhos: %.1f\n", mediaFilhos);
	printf ("Maior salario: R$ %.2f\n", maiorSalario);
	printf ("Percentual que recebe ate R$ 1000,00: %.2f %%", perc1000);
}
