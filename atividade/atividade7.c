/*
Implementar uma função que, dado um
vetor contendo quant números inteiros,
determine a posição do elemento que mais
se aproxime da média dos valores do vetor.
Nota: caso mais de um valor do vetor atenda ao
enunciado, basta determinar a posição de um
deles (a critério do aluno).
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

//protótipo da função
void PreencherVetor(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);
float calculandoMedia(int vetor[], int tamanho);
int verificandoPosicao(int vetor[], int tamanho, float media);

void main(){
	
	int vetor[TAM], resultado;
	float media;
	
	srand(time(NULL));
	
	PreencherVetor(vetor, TAM);
	exibirVetor(vetor, TAM);
	
	media = calculandoMedia(vetor, TAM);
	
	resultado = verificandoPosicao(vetor, TAM, media);
	
	printf("\n\nO elemento mais proximo da media (%.2f) e aquele da posicao %d", media, resultado);
}

void PreencherVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 9; i > 0; i--){
		
		vetor[i] = rand() % 100;
	}
}

void exibirVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
}

float calculandoMedia(int vetor[], int tamanho){
	
	int i, soma = 0;
	float media;
	
	for(i = 0; i <tamanho; i++){
		
		soma += vetor[i];
	}
	
	media = (float)soma / tamanho;
	
	return media;
}

int verificandoPosicao(int vetor[], int tamanho, float media){
	
	int i, j, min = 99999, aproximado, cont;
	
	for(i = 0; i < tamanho; i++){
		
		//inicializando o cont
		cont = -1;
		
		//verificando se o vetor é menor que a media
		if(vetor[i] < media){
				
				//se for, o j ira somar mais um até a media
				for(j = vetor[i]; j < media; j++){
			
				cont++;
			
			
			}
				//verificando se o cont é menor que min
				if(cont < min){
					min = cont;
					
					//apriximado recebe a posição do i
					aproximado = i;
				}
				
		}
		
		//verificanado se o vetor é maior que media
		else{
			
			for(j = vetor[i]; j > media; j--){
				
				
				cont++;
			
			
			}
				if(cont < min){
					min = cont;
					
					aproximado = i;
				}
				
		}
		
	}
	
	return aproximado;
	
}
