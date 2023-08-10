#include<stdio.h>

/*
QUESTÃO 02:
Elabore um algoritmo que, dada a idade de um
nadador, classifique-o em uma das seguintes
categorias:

Categoria 		Faixa de idade
infantil A 		0 - 4 anos
infantil B 		5 - 7 anos
infantil C 		8-10 anos
juvenil A 		11-13 anos
juvenil B 		14-17 anos
Adulto 18 		anos ou mais
*/

int main(){
	int idade;
	
	printf("sua idade:");
	scanf("%d", &idade);
	
	if(idade <= 4){
		printf("infantil A");
	}
	else{
		if(idade <= 7){
			printf("infantil B");
		}
		else{
			if(idade <= 10){
				printf("infantil C");
			}
			else{
				if(idade <= 13){
					printf("juvenil A");
				}
				else{
					if(idade <= 17){
						printf("juvenil B");
					}
					else{
						printf("adulto");
					}
				}
			}
		}
	}
}
