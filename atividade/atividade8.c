/*
Suponha a existência dos seguintes
vetores:

- vetA: contendo quant valores
inteiros;
- vetB: do mesmo tamanho do vetA,
porém contendo inteiros que
representam posições de vetA.

Desenvolver uma função que percorrerá os
elementos de vetA na ordem definida em
vetB. Se neste percurso os valores
estiverem em ordem crescente, a função
deverá retornar o valor 1; caso contrário, 0
será retornado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

#define TRUE 1
#define FALSE 0

//Protótipo da função
void preencherVetorA(int vetor[], int tamanho);
void preencherVetorB(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);
int buscarElemeneto(int vetorA[], int tamanho, int vetorB[], int tam);


void main(){
	
	int vetorA[TAM], vetorB[TAM];
	int resultado;
	
	srand(time(NULL));
	
	preencherVetorA(vetorA, TAM);
	preencherVetorB(vetorB, TAM);
	
	printf("  Vetor A");
	exibirVetor(vetorA, TAM);
	
	printf("\n\n");
	
	printf("  Vetor B");
	exibirVetor(vetorB, TAM);
	
	resultado = buscarElemeneto(vetorA, TAM, vetorB, TAM);
	
	printf("\n\nRetorno: %d", resultado);
}


void preencherVetorA(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		vetor[i] = rand() % 100;
	}
}

void preencherVetorB(int vetor[], int tamanho){
	
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

int buscarElemeneto(int vetorA[], int tamanho, int vetorB[], int tam){
	
	int i, valorAntigo, cont = 0;
	
	for(i = 0; i < tamanho; i++){
		
		//pegar a posição do vetorA de acordo com o vetor B
		vetorA[vetorB[i]];
		
		//verificando se o vetor está em ordem crescente
		if(vetorA[vetorB[i]] >= valorAntigo){
			cont++;
		}
		
		valorAntigo = vetorA[vetorB[i]];
		
	}
	
	//verificando se o contador é igual ao tamanho - 1
	//o contador acaba repetindo o ultimo numero, por isso o tam - 1
	if(cont == tam - 1){
		return TRUE;
	}
	else{
		return FALSE;
	}
}

