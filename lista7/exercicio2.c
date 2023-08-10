#include<stdio.h>

int main(){
	float m, producao;
	int anos = 0, c; 
	
	//lendo a produção atual
	printf("entre com a producao atual: ");
	scanf("%f", &m);
	
	//lendo a taxa de crescimento
	printf("digite a taxa de crecimento anual [0...100]: ");
	scanf("%d", &c);
	
	producao = m;
	
	while(producao < 2*m)
	{
		producao = producao + (c/100)*producao;
		
		anos++;
	}
	
	printf("\nForam necessarios %d anos para dobrar a producao", anos);
}
