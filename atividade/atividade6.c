/*
Desenvolver uma função que, dados um
número inteiro n e um vetor contendo
quant valores inteiros, altere a disposição
dos elementos do vetor, de forma que os
menores do que n fiquem no início da
estrutura e os demais ao seu final.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10
//protótipo da função
void preencherVetor(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);
void alterarElemento(int vetor[], int tamanho, int elemento);

void main(){
	
	int numero, vetor[TAM];
	
	srand(time(NULL));
	
	preencherVetor(vetor, TAM);
	exibirVetor(vetor, TAM);
	
	printf("\n\nDigite um numero: ");
	scanf("%d", &numero);
	
	alterarElemento(vetor, TAM, numero);
	
	exibirVetor(vetor, TAM);
	
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
		
		printf("\nVetor[i] = %d", i, vetor[i]);
	}
}

void alterarElemento(int vetor[], int tamanho, int elemento){
	
	int i, j, comparacao;
	
	for(i = 0; i < tamanho; i++){
		
		for(j = 0; j < tamanho; j++){
			
			if(vetor[i] < elemento){
				
				comparacao = vetor[i];
				
				vetor[i] = vetor[j];
				
				vetor[j] = comparacao;
				
			}
			
		}
		
	}
		
}
