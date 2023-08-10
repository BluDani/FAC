#include<stdio.h>

int main(){
	int valor1, valor2, valor3;
	int ordem, ordem2, maior, meio, menor;
	
	printf("digite um valor inteiro:");
	scanf("%d", &valor1);
	printf("digite um valor inteiro:");
	scanf("%d", &valor2);
	printf("digite um valor inteiro:");
	scanf("%d", &valor3);
	
	printf("o valor digitado e %d%d%d", valor1, valor2, valor3);
	ordem = valor1, valor2, valor3;
	
	printf("\no n1 e %d%d%d", valor1, valor2, valor3);
	
	if(ordem >= 100 && ordem <= 999){
		if(valor1 > valor2 && valor1 > valor3){
			maior = valor1;
			
			if(valor2 > valor3){
				meio = valor2;
				menor = valor3;
			}
			else{
				meio = valor3;
				menor = valor2;
			}
			printf("\no n2 e %d%d%d", menor, meio, maior);
		}
		else{
			if(valor2 > valor3){
				maior = valor2;
				
				if(valor1 > valor3){
					meio = valor1;
					menor = valor3;
				}
				else{
					meio = valor3;
					menor = valor1;
				}
				printf("\no n2 e %d%d%d", menor, meio, maior);
			}	
		}
		printf("\no n2 e %d%d%d", menor, meio, maior);
	}
}
