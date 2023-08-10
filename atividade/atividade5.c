/*
Desenvolver uma função que, dados um
número inteiro n e um vetor contendo
quant valores inteiros, determine a
quantidade de elementos do vetor que são
maiores do que n, assim com a quantidade
de valores menores do que n.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

//protótipo da função
void preencherVetor(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);
void buscarElemento(int vetor[], int tamanho, int elemento, int *maior, int *menor);

void main(){
	
	int numero, vetor[TAM], maior, menor = 0;
	
	srand(time(NULL));
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	preencherVetor(vetor, TAM);
	exibirVetor(vetor, TAM);
	buscarElemento(vetor, TAM, numero, &maior, &menor);
	
	printf("\n\n%d elementos sao maiores que %d", maior, numero);
	printf("\n%d elementos sao menores que %d", menor, numero);
}

//preenchendo vetor
void preencherVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		vetor[i] = rand() % 100;
		
	}
}

void exibirVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < TAM; i++){
		
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
}

void buscarElemento(int vetor[], int tamanho, int elemento, int *maior, int *menor){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		//verificando se o valor do vetor é maior que o elemento
		if(vetor[i] > elemento){
			
			(*maior) ++;
		}
		//verificando se o valor do vetor é menor que o elemento
		else{
			
			(*menor) ++;
		}
	}
	
}
