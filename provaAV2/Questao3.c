/*
Questão 03 [2,5 pontos]:

Fazer uma função que, dados um vetor vet com quant
valores inteiros e um número n, determine a
quantidade de valores superiores a n existentes na
primeira metade do vetor, assim como o número de
vezes que n aparece na segunda metade.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

//Protótipo da função
void preencherVetor(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);
void valoresSuperiores(int vetor[], int tamanho, int elemento, int *superiorP, int *superiorS);

void main(){
	
	int vetor[TAM], valor, resultado;
	int primeiraM = 0, segundaM = 0;
	
	srand(time(NULL));
	
	preencherVetor(vetor, TAM);
	exibirVetor(vetor, TAM);
	
	printf("\n\nDigite um numero: ");
	scanf("%d", &valor);
	
	valoresSuperiores(vetor, TAM, valor, &primeiraM, &segundaM);
	
	printf("\nA quantidade de valores superiores a %d na primeira metade e %d", valor, primeiraM);
	printf("\nA quantidade de valores superiores a %d na segunda metade e %d", valor, segundaM);
}

void preencherVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		vetor[i] = rand() % 10;
	}
}

void exibirVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
}

void valoresSuperiores(int vetor[], int tamanho, int elemento, int *superiorP, int *superiorS){
	
	int i, j, cont = 0;
	
	for(i = 0; i < tamanho / 2; i++){
		
		if(vetor[i] > elemento){
			
			(*superiorP)++;
		}
	}
	
	for(j = 9; j > tamanho / 2; j--){
		
		if(vetor[j] > elemento){
		
			(*superiorS)++;
		}
	}
}
