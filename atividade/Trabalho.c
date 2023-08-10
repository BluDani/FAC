/*
Suponha a existência de um vetor, inicialmente
vazio (ou seja, uma variável quant terá o valor 0,
inicialmente), com capacidade para armazenar até
CAP números inteiros, onde CAP é uma
constante.

Pede-se o desenvolvimento de um programa que,
através de um menu, permita ao usuário realizar
as seguintes operações sobre o vetor (para cada
operação, uma função deve ser implementada):

1) Inserção de um novo número;
2) Remoção de determinado valor;
3) Remoção do elemento que encontra-se
em uma dada posição;
4) Alteração de um valor por outro;
5) Busca de determinado número, retornando
a sua posição (caso exista no vetor) ou o
valor -1 se não for encontrado;
6) Exibição de todos os elementos do vetor.

A execução do sistema deve consistir na exibição
do menu seguida da execução da operação
escolhida, repetidas vezes, até que o usuário opte
pela saída do programa.

Observações:
a. Não são permitidos valores duplicados;
*/


//Trabalho feito pelos alunos Daniel Andrade e Sarah Vitoria

#include<stdio.h>
#include<stdlib.h>

#define CAP 10

//Protótipo da função
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
		
		//se o numero não for repetido, ele é adicionado no vetor
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
			
			//verificando se o valor do vetor é igual ao numero digitado
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
		
		//verificando se o numero digitado é válido
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
			
			//verificando se o novo valor não é um valor repetido
			if(vetor[i] == valorNovo){
				cont++;
			}
		}
		
		if(cont == 0){
			
			for(j = 0; j < tamanho; j++){
				
				//verificando se o valorAntigo está no vetor
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
			
			//verificando se o numero digitado está no vetor, se estiver, a posição é retornada
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
