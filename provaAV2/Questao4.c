/*
Questão 04 [2,5 pontos]:

Dado um vetor vetA com quantA inteiros, desenvolver
uma função que crie um vetor vetB contendo apenas os
elementos que aparecem mais de uma vez em vetA,
conforme ilustrado pelos exemplos a seguir:

Exemplo 01:

veta 1 6 1 3 2 6 7 6
	 0 1 2 3 4 5 6 7

vetB 1 6
	 0 1 2 3 4 5 6 7
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 5

//Protótipo da função
void preencherVetor(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);
void preencherVetorB(int vetor[], int tamanho);

void main(){
	
	int vetorA[TAM] = {1,5,3,3,5,};
	
	srand(time(NULL));
	
	//preencherVetor(vetorA, TAM);
	exibirVetor(vetorA, TAM);
	
	preencherVetorB(vetorA, TAM);
} 

/*
void preencherVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		vetor[i] = rand() % 10;
	}
}
*/

void exibirVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
}

void preencherVetorB(int vetor[], int tamanho){
	
	int i, j, vetorB[tamanho], cont, quant = 0, posicao;
	
	for(i = 0, j = 0; i < tamanho; i++, j++){
		
		cont = 0;
		
		for(j = i; j < tamanho; j++){
			
			if(vetor[j] == vetor[i]){
				cont++;
				posicao = i;
			}
		}
		
		if(cont >= 2 && vetor[quant] != vetor[posicao]){
			vetorB[quant] = vetor[posicao];
			quant++;
			
		}
		else{
			vetorB[quant] = 0;
		}
		
		printf("\n\nVetor[%d] = %d", quant, vetor[quant]);
		//printf("\ncont = %d", cont);
	}
}
