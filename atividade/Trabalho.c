/*
Suponha a exist�ncia de um vetor, inicialmente
vazio (ou seja, uma vari�vel quant ter� o valor 0,
inicialmente), com capacidade para armazenar at�
CAP n�meros inteiros, onde CAP � uma
constante.

Pede-se o desenvolvimento de um programa que,
atrav�s de um menu, permita ao usu�rio realizar
as seguintes opera��es sobre o vetor (para cada
opera��o, uma fun��o deve ser implementada):

1) Inser��o de um novo n�mero;
2) Remo��o de determinado valor;
3) Remo��o do elemento que encontra-se
em uma dada posi��o;
4) Altera��o de um valor por outro;
5) Busca de determinado n�mero, retornando
a sua posi��o (caso exista no vetor) ou o
valor -1 se n�o for encontrado;
6) Exibi��o de todos os elementos do vetor.

A execu��o do sistema deve consistir na exibi��o
do menu seguida da execu��o da opera��o
escolhida, repetidas vezes, at� que o usu�rio opte
pela sa�da do programa.

Observa��es:
a. N�o s�o permitidos valores duplicados;
*/


//Trabalho feito pelos alunos Daniel Andrade e Sarah Vitoria

#include<stdio.h>
#include<stdlib.h>

#define CAP 10

//Prot�tipo da fun��o
void inserirNumero(int vetor[], int tamanho, int quantidade, int *preenchido);
void removerValor(int vetor[], int tamanho, int quantidade, int *removido);
void removerPosicao(int vetor[], int tamanho, int quantidade, int *removido);
void alterarValor(int vetor[], int tamanho, int quantidade);
int buscarElemento(int vetor[], int tamanho, int quantidade);
void exibirVetor(int vetor[], int tamanho);

void main(){
	
	int vetor[CAP], quant = 0, i;
	int operacao, resultado5;
	
	for(i = 0; i < CAP; i++){
		vetor[i] = 0;
	}
	
	do{
		
		printf("\n__________________________________________________");
		printf("\n\t\tMenu");
		printf("\n\t1 Inserir novo numero");
		printf("\n\t2 Remover determinado valor");
		printf("\n\t3 Remover elemento de uma certa posicao");
		printf("\n\t4 Alterar um valor por outro");
		printf("\n\t5 Buscar determinado numero");
		printf("\n\t6 Exibir todos os elementos do vetor");
		printf("\n\t7 Fechar programa\n");
		printf("__________________________________________________");
		
		
		printf("\n\nEscolha a operacao: ");
		scanf("%d", &operacao);
		
		switch (operacao){
			
			case 1: inserirNumero(vetor, CAP, quant, &quant); 
			break;
			
			case 2: removerValor(vetor, CAP, quant, &quant);
			break;
			
			case 3: removerPosicao(vetor, CAP, quant, &quant);
			break;
			
			case 4: alterarValor(vetor, CAP, quant);
			break;
			
			case 5: resultado5 = buscarElemento(vetor, CAP, quant);
					
					if(quant != 0){
						
						if(resultado5 == -1){
							printf("\nValor nao encontrado");
						}
						else{
							printf("\nValor encontrado na posicao %d", resultado5);
						}
						
					}
			break;
			
			case 6: exibirVetor(vetor, CAP);
			break;
		}
		
	}
	while(operacao != 7);
}

void inserirNumero(int vetor[], int tamanho, int quantidade, int *preenchido){
	
	int i, j, numero, cont = 0;
	
	//verificando se o vetor esta cheio
	if(quantidade < tamanho){
		
		printf("\nInserir numero: ");
		scanf("%d", &numero);
	
		//verificando se o numero digitado ja esta no vetor
		for(i = 0; i < tamanho; i++){
			if(vetor[i] == numero){
				cont++;
			}
		}
		
		//se o numero n�o for repetido, ele � adicionado no vetor
		if(cont == 0){
			
			for(j = 0; j <= quantidade; j++){
				
				if(vetor[j] == 0){
					vetor[j] = numero;
				}
			}
			
			(*preenchido) ++;
		}
		else{
			
			printf("\n\n[ERROR] Este numero ja foi inserido");
		}
		
	}
	else{
		
		printf("\n\n[ERROR] Vetor sem espaco, escolha outra operacao");
	}
}

void removerValor(int vetor[], int tamanho, int quantidade, int *removido){
	
	int i, j, numero;
	
	//verificando se o vetor esta vazio
	if(quantidade != 0){
		
		printf("Digite o valor que voce quer remover: ");
		scanf("%d", &numero);
		
		for(i = 0; i < tamanho; i++){
			
			//verificando se o valor do vetor � igual ao numero digitado
			if(vetor[i] == numero){
				
				vetor[i] = 0;
				(*removido) --;
			}
		}
	}
	else{
		printf("\n[ERROR] Vetor esta vazio");
	}
}

void removerPosicao(int vetor[], int tamanho, int quantidade, int *removido){
	
	int i, numero;
	
	//verificando se o vetor esta vazio
	if(quantidade != 0){
		
		printf("Digite a posicao que voce quer remover o valor: ");
		scanf("%d", &numero);
		
		//verificando se o numero digitado � v�lido
		if((numero >= 0) && (numero < tamanho)){
			
			vetor[numero] = 0;
			(*removido) --;
		}
		else{
			printf("\n[ERROR] Posicao invalida");
		}
	}
	else{
		printf("\n[ERROR] Vetor esta vazio");
	}
}

void alterarValor(int vetor[], int tamanho, int quantidade){
	
	int i, j, valorAntigo, valorNovo, cont = 0;
	
	//verificando se o vetor esta vazio
	if(quantidade != 0){
		
		printf("Digite o valor que voce deseja trocar: ");
		scanf("%d", &valorAntigo);
		
		printf("Digite o valor que voce deseja colocar: ");
		scanf("%d", &valorNovo);
		
		for(i = 0; i < tamanho; i++){
			
			//verificando se o novo valor n�o � um valor repetido
			if(vetor[i] == valorNovo){
				cont++;
			}
		}
		
		if(cont == 0){
			
			for(j = 0; j < tamanho; j++){
				
				//verificando se o valorAntigo est� no vetor
				if(vetor[j] == valorAntigo){
					
					vetor[j] = valorNovo;
				}
			}
		}
		else{
			printf("\n[ERROR] O valor que voce quer inserir ja esta no vetor");
		}
	}
	else{
		printf("\n[ERROR] Vetor esta vazio");
	}
}

int buscarElemento(int vetor[], int tamanho, int quantidade){
	
	int i, numero;
	
	//verificando se o vetor esta vazio
	if(quantidade != 0){
		
		printf("Digite o valor que voce quer encontrar: ");
		scanf("%d", &numero);
		
		for(i = 0; i < tamanho; i++){
			
			//verificando se o numero digitado est� no vetor, se estiver, a posi��o � retornada
			if(vetor[i] == numero){
				return i;
			}
		}
		
		return -1;
	}
	else{
		printf("\n[ERROR] Vetor esta vazio");
	}
}

void exibirVetor(int vetor[], int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		
		if(vetor[i] != 0){
			
			printf("\nVetor[%d] = %d", i, vetor[i]);
		}
	}
}
